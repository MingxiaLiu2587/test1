#ifndef HUFFUMANTREE_H_
#define  HUFFUMANTREE_H_
#include<vector>
#include"HTNode.h"
using namespace std;
class HuffumanTree
{
public:
	HuffumanTree();
	~HuffumanTree();
	void setRoot(HTNode*r);
	HTNode* getRoot();
	void huffuCode(HTNode*root);
	void CreateHT(vector<HTNode*> HTNodeVec);
private:
	HTNode*root;
};
#endif // ! HUFFUMANTREE_H_


