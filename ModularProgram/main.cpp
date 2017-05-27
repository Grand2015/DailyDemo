#include<iostream>
#include<cmath>
//#include<cstring>
#include<time.h>
#include<stdlib.h>
#include"point.h"
#include"student.h"
#include"line.h"
#include"date.h"
#include"family.h"
#include"complex.h"
#include"box.h"

using namespace std;
//inline int random(int count);

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

	Father f1((char *)"li",10000);
	Son s1((char *)"wang",100,&f1);
	s1.receive(f1.manager(&s1,1000));
	f1.print();
	s1.print();
	Complex c0,c1(-3,4),c2(1,-10);
	double d1=5.5,d2=0.5;
	d1=d1+d2;

	c0=c1+c2;
	c0.print();
	c0=c1+d1;
	c0.print();
	c0=d1+c1;
	c0.print();

	c0=c1-c2;
	c0.print();
	c0=-c2;
	c0.print();
	const int boxCount = 10;
	Box boxes[boxCount];
	const int dimLimit = 10;
	srand((unsigned)time(0));
	for(int i = 0;i < boxCount;i++)
		boxes[i] = Box (random(dimLimit),random(dimLimit),random(dimLimit));
	Box *pLargest = &boxes[0];
	for(int i = 1;i < boxCount;i++)
		if(*pLargest < boxes[i])
			pLargest = &boxes[i];
	cout<<"最大的盒子：";
	pLargest->show();
	
	const double volMin = 50.0;
	const double volMax = 100.0;

	for(int i = 0;i < boxCount;i++)
		if(volMin < boxes[i] && boxes[i] < volMax)
			boxes[i].show();

*/
	Date d0(2011,12,31);
	d0.print();
	return 0;
}

