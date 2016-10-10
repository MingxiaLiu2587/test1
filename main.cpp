#include<iostream>
#include<vector>
#include"HTNode.h"
#include "HuffumanTree.h"
using namespace std;
// 哈夫曼树的节点的读书要么为0 要么为2



void main()
{
	vector<HTNode*> HTNodeVec;
	int inputWeight[4] = {7,5,2,4};
	int start = 0;// 标记排序的起始位置
	// 初始化 各个叶子节点
	for (int i = 0; i < 4; i++)
	{
		HTNodeVec.push_back(new HTNode(inputWeight[i]));
	}
	vector<HTNode*>  HTLeafNodeVec(HTNodeVec.begin(), HTNodeVec.end());
	HuffumanTree * HFT = new HuffumanTree();
	HFT->CreateHT(HTNodeVec);
	HFT->huffuCode(HFT->getRoot());
	for (int i = 0; i < 4; i++)
	{
		cout << HTLeafNodeVec[i]->getWeight() << "  " <<  HTLeafNodeVec[i]->getHFCode() << endl;	 
	}
}