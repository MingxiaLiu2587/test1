
#include <iostream>
//#include<string>
#include"HTNode.h"
//using namespace std;
HTNode::HTNode()
{
	weight = 0;
	parent = NULL;
	rchild = NULL;
	lchild = NULL;
	HFCode = "";
}
HTNode::HTNode(int w)
{
	weight = w;
	parent = NULL;
	rchild = NULL;
	lchild = NULL;
	HFCode = "";
}
HTNode::~HTNode()
{

}
int HTNode::getWeight()
{
	return weight;
}
HTNode* HTNode::getParent()
{
	return parent;
}
HTNode* HTNode::getLchild()
{
	return lchild;
}
HTNode* HTNode::getRchild()
{
	return rchild;
}
void HTNode::setWeight(int w)
{
	weight = w;
}
void HTNode::setParent(HTNode *p)
{
	parent = p;
}
void HTNode::setLchild(HTNode*lc)
{
	lchild = lc;
}
void HTNode::setRchild(HTNode*rc)
{
	rchild = rc;
}

void HTNode::setHFCode(string HFC)
{
	HFCode = HFC;
}
string  HTNode::getHFCode()
{
	return HFCode;

}