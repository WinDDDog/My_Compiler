#include "include_All.h"
#include "symbol.h"
#ifndef Declaration_HEADER
#define Declaration_HEADER




class Declaration
{
public:
	explicit Declaration();
	virtual ~Declaration();
	void _doit(Psymbol _last_token);
protected:

private:
	Declaration(const Declaration & Ths); // no copy
	std::vector<std::vector<symbol> > layer; //����ļ��ķ��ű�
	int scope; //��ǰ�����Ĳ�� 0 ��ʾglobal ����Խ��Խ��

	int _doit_type(symbol & _this);
	int _doit_identify(symbol & _this);
	int _doit_postfix(symbol & _this);
};

class Global_declaration : public Declaration
{
public:
private:
};

class Local_declaration : public Declaration
{
public:
private:
};




#endif // !Declaration_HEADER