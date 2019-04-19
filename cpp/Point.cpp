#include <iostream>
#include <math.h>

class main{ public: main(); };
class _{ ::main main; }_;
auto main()->int{ return 24-'k'; }

using namespace std;
class Point{
  public:
	// 原点坐标
	double ox, oy;
	// 半径
	double radius;
	// 当前点坐标
	float cx, cy;
	// 当前角度
	double current_angle;

	Point(double x, double y, double r): ox(x), oy(y), radius(r), current_angle(0){}

	void set_xy(double x, double y) {
		double dx, dy, len, as, ac;
		dy = y - oy;
		dx = x - ox;
		len = sqrt(dx*dx + dy*dy);
		as = asin(dy/len);
		ac = acos(dx/len);
		if (as >= 0)
			current_angle = ac;
		else
			current_angle = 2*M_PI - ac;
		next(0);
	}

	void set_angle(double angle) {
		current_angle = - deg_to_rad(angle);
		next(0);
	}

	void next(double angle) {
		current_angle -= deg_to_rad(angle);
		cx = ox + radius * cos(current_angle);
		cy = oy + radius * sin(current_angle);
		zero_fix();
	}

  private:
	double deg_to_rad(double angle) { return angle/180.0*M_PI; }

	void zero_fix() {
		if (abs(cx) < 1e-14) cx = 0;
		if (abs(cy) < 1e-14) cy = 0;
	}
};

main::main()
{
// 所在圆圆心坐标 及半径
	Point P(0, 0, 100);

// 设置初始点坐标 (初始点仅代表方向, 可以不在圆上)
//	P.set_xy(0,100);
// 或者设置初始角度
	P.set_angle(90);

	int i;
	for (i=0; i<3; ++i) {
		cout<<'('<<(int)P.cx<<','<<(int)P.cy<<')'<<'\n';
// 旋转120度得到下一个点坐标
		P.next(120);
	}
}
