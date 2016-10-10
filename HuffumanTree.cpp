#include "HuffumanTree.h"
#include<iostream>
#include<algorithm>
using namespace std;


int cmp(HTNode* vnode1, HTNode* vnode2)
{
	return vnode1->getWeight() < vnode2->getWeight();
}
HuffumanTree::HuffumanTree()
{
	root = NULL;
}
HuffumanTree::~HuffumanTree()
{
}
void HuffumanTree::setRoot(HTNode*r)
{
	root = r;
	
}
HTNode* HuffumanTree::getRoot()
{
	return root;
}
void HuffumanTree::huffuCode(HTNode*hfNode)
{
	HTNode*lc = hfNode->getLchild(), *rc = hfNode->getRchild();
	string parentCode = hfNode->getHFCode();
	if (lc)
	{
		lc->setHFCode(parentCode + "0");
		rc->setHFCode(parentCode + "1");
		huffuCode(lc);
		huffuCode(rc);
	}
	else
	{
		return;
	}
}

void HuffumanTree::CreateHT( vector<HTNode*> HTNodeVec)
{
	int start = 0;
	HTNode* parent = new HTNode();
	vector<HTNode*>::iterator outIter1, outIter2;
	while (HTNodeVec.begin() + start + 1 != HTNodeVec.end()) // 只剩下一个节点
	{
		sort(HTNodeVec.begin() + start, HTNodeVec.end(), cmp);
		outIter1 = HTNodeVec.begin() + start;
		outIter2 = outIter1 + 1;
		parent = new HTNode((*outIter1)->getWeight() + (*outIter2)->getWeight());
		(*outIter1)->setParent(parent);
		(*outIter2)->setParent(parent);
		parent->setLchild(*outIter1);
		parent->setRchild(*outIter2);
		HTNodeVec.insert(outIter2 + 1, parent);
		start = start + 2;
	}
	this->setRoot(parent);
}