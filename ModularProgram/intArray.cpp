#include<iostream>
#include"intArray.h"

using namespace std;

IntArray::IntArray()
{	int	size=0;	}

IntArray::IntArray(int size)
{
	this->size = size;
	if(this->size == 0)
		pArr = NULL;
	else
		pArr = new int[this->size+1];
	for(int i=1;i<=this->size;i++)
		pArr[i]=0;
}

IntArray::~IntArray()
{
	if(pArr != NULL)
		delete []pArr;
}

int& IntArray::operator [] (int i)
{
	if(i<1 || i>this->size)
	{
		cout<<"out of rang"<<endl;
		return pArr[0];
	}
	return pArr[i];
}

