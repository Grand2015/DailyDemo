#include<iostream>
#include<cstring>
#include"family.h"

using namespace std;

Father::Father(char *n,int m)
{
	strcpy(name,n);
	this->money=m;
}

char* Father::getName()
{
	return name;	
}

void Father::receive(int m)
{
	if(m>0)
		money+=m;
}

int Father::pay(int m)
{
	if(m<=0)
		return 0;
	if(money>=m)
	{	money-=m;
		return m;
	}
	else
		return 0;
}

void Father::print()
{
	cout<<"name:"<<name<<" money:"<<money<<endl;
}

int Father::manager(Son *role,int m)
{
	if(strcmp(role->getFather()->getName(),name)==0)
		return pay(m);
	else 
		return 0;
}


Son::Son(char *n,int m,Father *f)
{
	strcpy(name,n);
	this->money=m;
	this->father=f;
}

char* Son::getName()
{
	return name;
}

Father* Son::getFather()
{
	return father;
}

void Son::receive(int m)
{
	if(m>=0)
		money+=m;
}

int Son::pay(int m)
{	
	if(m<=0)
		return 0;
	if(money>=m)
	{	money-=m;
		return m;
	}
	else
		return 0;
}


void Son::print()
{
	cout<<"name:"<<name<<" money:"<<money<<endl;
}

