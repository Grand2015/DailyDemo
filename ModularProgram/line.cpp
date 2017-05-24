#include<iostream>
#include<cmath>
#include"line.h"
#include"point.h"

using namespace std;

Line::Line(double a,double b,double c)
{
	this->a=a;
	this->b=b;
	this->c=c;
}
void Line::disp()
{
	cout<<"线："<<a<<"x+"<<b<<"y+"<<c<<"=0"<<endl;
}

double distanceF(Point p,Line l)
{
	return fabs(l.a*p.x+l.b*p.y+l.c)/sqrt(l.a*l.a+l.b*l.b);
}






