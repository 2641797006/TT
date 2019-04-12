#include <iostream>
#include <cmath>

class main{ public: main(); };
class _{ ::main main; }_;
auto main()->int{ return 24-'k'; }

using namespace std;

class Point{
  public:
	double x, y;
};

main::main()
{
// 点A坐标:
	Point A = { 0, 70};
// 点B坐标:
	Point B = { 70, 0};
	double x = B.x - A.x;
	double y = B.y - A.y;
	double k = y/x;
	double b = A.y - k * A.x;

	cout<<"斜率k="<<k<<endl;
	cout<<"直线方程: "<<k<<" * X - Y + "<<b<<" = 0"<<endl;
}

