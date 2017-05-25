#ifndef BOX_H
#define BOX_H
class Box
{
public:
	//Box(double=1.0,double=1.0,double=1.0);
	Box();
	Box(double length,double width,double height);
	double volume() const;
	bool operator < (const Box &b) const;
	bool operator < (double dVolume) const;
	friend bool operator < (const double dVolume,const Box &b);
	void show() const;
private:
	double length,width,height;
};

//内联函数 产生随机数
//inline int random(int count);

inline int random(int count)
{	return 1+(int)(count*(double)(rand())/(RAND_MAX+1.0));	}

#endif
