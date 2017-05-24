#ifndef DATE_H
#define DATE_H
class Date
{
private:
	int year,month,day;
public:
	Date(int year,int month,int day);
	Date(Date &d);
};
#endif
