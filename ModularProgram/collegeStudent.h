#ifndef _COLLEGESTUDENT_H
#define _COLLEGESTUDENT_H

#include"studentBase.h"
class CollegeStudent : public StudentBase
{
private:
	char major[10];
public:
	void input_major();
};

#endif
