#include "include_All.h"

#ifndef symbol_HEADER
#define symbol_HEADER

//����ÿһ��Դ�ļ������е�����ȫ�ַ��ű�extern���ű��ֲ��������ű�
//ʵ�ַ�ʽ��һ����

struct _type
{
	int size;
	int type;
	int pointer;
};
typedef struct _type type;
typedef struct _type* Ptype;

struct _symbol
{
	std::string name;	//����
	int hash;			//��ϣ���ڱȽ�
	int scope;			//�����򣬺���Ҫ
	int line, letral;	//Դ���е�λ��
	type type;
};
typedef struct _symbol symbol;
typedef struct _symbol* Psymbol;


#endif