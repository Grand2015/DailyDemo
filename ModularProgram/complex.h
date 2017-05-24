#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	friend Complex operator + (double d,const Complex &c);
	friend Complex operator - (const Complex &c1,const Complex &c2);
	friend Complex operator - (const Complex &c);
public:
	Complex();
	Complex(double dReal,double dImag);
	Complex operator + (const Complex &c);
	Complex operator - (const Complex &c);
	Complex operator + (double d);
	Complex operator -();
	double getReal()const;
	double getImag()const;
	void print()const;
private:
	double dReal,dImag;

};
#endif
