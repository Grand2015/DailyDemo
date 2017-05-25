#include<iostream>
#include<stdlib.h>

#include"box.h"

using namespace std;

Box::Box()
{	double length=1.0;double width=1.0;double height=1.0;	}

Box::Box(double length,double width,double height)
{
	this->length = length;
	this->width  = width;
	this->height = height;
}

double Box::volume() const
{	return length*width*height;		}

bool Box::operator < (const Box &b) const
{	return volume() < b.volume();	}

bool Box::operator < (double dVolume) const
{	return volume() <dVolume;	}

bool operator < (const double dVolume,const Box &b)
{	return dVolume < b.volume();	}

void Box::show() const
{	cout<<"length:"<<length<<" width:"<<width<<" height:"<<height<<endl;}











