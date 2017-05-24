class Line;
class Point
{
	public:
		Point(double x=0.0,double y=0.0);
		double distance(Point &p);
		void setX(double i);
		void setY(double j);
		void disp();
		friend double distanceF(Point p,Line l);
	private:
		double x;
		double y;
};
