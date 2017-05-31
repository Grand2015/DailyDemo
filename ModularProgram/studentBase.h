#ifndef _STUDENTBASE_H
#define _STUDENTBASE_H
class StudentBase
{
protected:
	char name[10];
	char sex;
	int number;
	char school[10];
public:
	void input_data();
	void print();
};


#endif
