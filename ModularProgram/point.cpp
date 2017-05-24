#include<iostream>
#include<cmath>
#include"point.h"

using namespace std;
//
Point::Point(double x,double y)
{	
	this->x=x;
	this->y=y;
}


void Point::disp()
{	
	cout<<"点（"<<x<<","<<y<<"）"<<endl;
}
double Point::distance(Point &p)
{
	return sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));
}
/*double distanceF(Point p1,Point p2)
{
	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}*/
void Point::setX(double i)
{
	x=i;
}
void Point::setY(double j)
{	
	y=j;
}
