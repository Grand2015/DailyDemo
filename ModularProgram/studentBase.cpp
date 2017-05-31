#include<iostream>
#include"studentBase.h"

using namespace std;

void studentBase:input_data()
{	cin>>name>>sex>>number>>school;	}

void studentBase:print()
{
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"number:"<<number<<endl;
	cout<<"school:"<<school<<endl;
}
