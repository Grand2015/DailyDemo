#include<iostream>
#include"date.h"

using namespace std;

const int Date::days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date()
{	
	year  = 1900;
	month = 1;
	day   = 1;
}

Date::Date(int year,int month,int day)
{
	this->year  = (year>=1900 && year<=2011) ? year:1900;
	this->month = (month>=1 && month<=12) ? month:1;
	if(2==month && leapYear(this->year))	
		this->day = (day>=1 && day<=29) ? day:1;
	else
		this->day = (day>=1 && day<= days[this->month]) ? day:1;
//	cout<<"constructor Date"<<endl;
}

Date::Date(Date& d)
{
//	cout<<"copy constructor Date"<<endl;
}

Date &Date::operator ++ ()
{
	helpIncrement();
	return *this;
}

Date Date::operator ++ (int)
{
	Date temp = *this;
	helpIncrement();
	return temp;
}

bool Date::leapYear(int year)
{
	if(year%400==0 || (year%100!=0 && year%4==0))
		return true;
	else
		return false;
}

bool Date::endOfMonth(int day)
{
	if(month==2 && leapYear(this->year))
		return day==29;
	else 
		return day==days[this->month];
}

void Date::helpIncrement()
{
	if(endOfMonth(this->day) && month==12)
	{
		this->day   = 1;
		this->month = 1;
		++this->year;
	}
	else if(endOfMonth(this->day))
	{
		this->day = 1;
		++this->month;
	}
	else 
		++this->day;
}

void Date::print() const
{
	char *monthName[13]={(char*)"",(char*)"Jan",(char*)"Feb",(char*)"Mar",(char*)"Apr",(char*)"May",(char*)"June",(char*)"July",(char*)"Aug",(char*)"Sep",(char*)"Oct",(char*)"Nov",(char*)"Dec"};
	cout<<monthName[month]<<" "<<day<<" "<<year<<endl;
}


