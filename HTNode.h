#ifndef HTNode_H_
#define HTNode_H_
#include<string>
using namespace std;
class HTNode
{
public:
	HTNode();
	HTNode(int w);
	~HTNode();
	int getWeight();
	HTNode* getParent();
	HTNode* getLchild();
	HTNode* getRchild();
	void setWeight(int w);
	void setParent(HTNode *p);
	void setLchild(HTNode*lc);
	void setRchild(HTNode*rc);
	void setHFCode(string HFC);
	string getHFCode();
private:
	int weight;
	HTNode *parent;
	HTNode *lchild;
	HTNode *rchild;
	string HFCode;
};
#endif // !HTNode



//typedef struct 
//{
//	int weight;
//	int parent;
//	int lchild;
//	int rchild;
//
//}HTNode;
