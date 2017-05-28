#ifndef _INTARRAY_H
#define _INTARRAY_H
//重载数组下标运算符[]
class IntArray
{
public:
	IntArray();
	IntArray(int size);
	~IntArray();
	int& operator [] (int i);
private:
	int* pArr;
	int  size;
};



#endif
