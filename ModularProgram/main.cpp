#include<iostream>
#include<cmath>
//#include<cstring>
#include"point.h"
#include"student.h"
#include"line.h"
#include"date.h"
#include"family.h"

using namespace std;

int main()
{
/*	
	Point p1,p2;
	cout<<"请输入两组坐标"<<endl;
	p1.setX(2);p2.setX(2);
	p1.setY(5);p2.setY(6);
	cout<<p1.distance(p2)<<endl;

	Point p1(1.0,2.0);
	Line l1(3.0,4.0,5.0);
	p1.disp();
	l1.disp();
	cout<<"距离为"<<distanceF(p1,l1)<<endl;

	cout<<"p3=";
	p3.disp();
	Student stud[3]={Student((char *)"zhang",20,60),Student((char *)"li",19,70),Student((char *)"wang",18,78)};
	cout<<"sum="<<stud[0].sum<<"average="<<stud[0].getAverage()<<endl;
	Date d1(1,2,3);
	Student s1(1,(char *)"abc",d1);
*/

	Father f1((char *)"li",10000);
	Son s1((char *)"wang",100,&f1);
	s1.receive(f1.manager(&s1,1000));
	f1.print();
	s1.print();
	return 0;
}

