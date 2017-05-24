#include<iostream>
#include"date.h"

using namespace std;

Date::Date(int year,int month,int day)
{
	this->year  = year;
	this->month = month;
	this->day   = day;
	cout<<"constructor Date"<<endl;
}
Date::Date(Date& d)
{
	cout<<"copy constructor Date"<<endl;
}
