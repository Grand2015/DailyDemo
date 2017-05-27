#ifndef STUDENT_H
#define STUDENT_H

#include"date.h"
//class Date;
class Student
{
public:
//	Student(char *n,int a,float s);
	Student(int n,char *nam,Date birth);
//	Student(int n,char *nam,int y,int )
	static float sum;
	static float getAverage();
	void disp();
private:
	char  name[20];
	int   age,num;
	float score;
	Date birthday;
};

#endif
