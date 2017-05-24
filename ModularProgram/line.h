class Point;
class Line
{
public:
	Line(double a=0.0,double b=0.0,double c=0.0);
	void disp();
	friend double distanceF(Point p,Line l);
private:
	double a,b,c;
};
