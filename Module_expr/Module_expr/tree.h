#include "include_All.h"
#include "symbol.h"

#ifndef TREE_HEADER
#define TREE_HEADER

typedef struct _Tree * Ptree;
typedef struct _Tree tree;
struct _Tree
{
	int op;// operator in this node	����������������ת���ȴ�
	int _type; // the type in this node �����Ǹ��ڵ㿴���ӽڵ������
	Ptree _left;
	Ptree _right;
	union
	{
		Psymbol _Psym;	//����һ��ID��Ҫһ������
		int _value;		//��������ֱ�Ӽ�¼����
	}_u;
};


#endif
