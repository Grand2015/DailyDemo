#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex()
{
	dReal=0;
	dImag=0;
}

Complex::Complex(double dReal,double dImag)
{
	this->dReal=dReal;
	this->dImag=dImag;
}

Complex Complex::operator + (const Complex &c)
{
	Complex comp;
	comp.dReal=dReal+c.dReal;
	comp.dImag=dImag+c.dImag;
	return comp;
}

Complex Complex::operator - (const Complex &c)
{
	Complex comp;
	comp.dReal=dReal-c.dReal;
	comp.dImag=dImag-c.dImag;
	return comp;	
}

Complex Complex::operator + (double d)
{
	return Complex (dReal+d,dImag);
}

Complex Complex::operator - ()
{
	return Complex (-dReal,-dImag);
}

double Complex::getReal()const
{return dReal;}

double Complex::getImag()const
{return dImag;}

void Complex::print()const
{cout<<"("<<dReal<<","<<dImag<<")"<<endl;}

//friend function
Complex operator + (double d,Complex const &c)
{
	return Complex (d+c.dReal,c.dImag);
}

Complex operator - (const Complex &c1,const Complex &c2)
{
	return Complex (c1.dReal-c2.dReal,c1.dReal-c2.dImag);
}

Complex operator - (const Complex &c)
{
	return Complex (-c.dReal,-c.dImag);
}



