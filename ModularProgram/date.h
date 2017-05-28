#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int year,month,day;
	static const int days[];
	void helpIncrement();

public:
	Date();
	Date(int year,int month,int day);
	Date &operator ++();
	Date operator ++(int);
	bool leapYear(int);
	bool endOfMonth(int);
	void print() const;
	Date(Date &d);
};

//const int Date::days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};



#endif
