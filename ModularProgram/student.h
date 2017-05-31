#ifndef _STUDENT_H
#define _STUDENT_H

#include"date.h"
//class Date;
class Student
{
public:
	Student(int n,char *nam,Date birth);
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
