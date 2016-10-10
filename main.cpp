#include<iostream>
#include<vector>
#include"HTNode.h"
#include "HuffumanTree.h"
using namespace std;
// ���������Ľڵ�Ķ���ҪôΪ0 ҪôΪ2



void main()
{
	vector<HTNode*> HTNodeVec;
	int inputWeight[4] = {7,5,2,4};
	int start = 0;// ����������ʼλ��
	// ��ʼ�� ����Ҷ�ӽڵ�
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