#include<iostream>
#include<cstring>
#include"student.h"
#include"date.h"

using namespace std;
/*
Student::Student(char *n,int a,float s)
{
	strcpy(name,n);
	age=a;
	score=s;
	sum+=score;
}
*/
Student::Student(int n,char * nam,Date birth):birthday(birth)
{
	num=n;
	strcpy(name,nam);
}


float Student::sum=0;

float Student::getAverage()
{
	return sum/3;
}

void Student::disp()
{
	cout<<"sum="<<sum<<"average"<<getAverage()<<endl;
}






