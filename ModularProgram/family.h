#ifndef FAMILY_H
#define FAMILY_H

class Son;
class Father
{
private:
	char name[16];
	int  money;
	int  pay(int m);
public:
	Father(char *n,int m);
	char *getName();
	void receive(int m);
	int  manager(Son *role,int m);
	void print();
};

class Son
{
private:
	char   name[16];
	int    money;
	Father *father;
public:
	Son(char *n,int m,Father *f);
	char   *getName();
	Father *getFather();
	void   receive(int m);
	int    pay(int m);
    void   print();
};

#endif
