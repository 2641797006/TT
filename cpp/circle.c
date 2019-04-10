#include <stdio.h>
#include <math.h>

int
main()
{
	double ox, oy, radius;
	double angle_fix = 0;
	double cx, cy, angle;

// 原点坐标
	ox = 0, oy = 0;
// 半径
	radius = 100;
// 初始角度
	angle_fix = 0;

	angle -= angle_fix;
	printf("%f, %f\n", ox + radius * cos(angle), oy + radius * sin(angle));
	angle -= M_PI*2/3.0;
	printf("%f, %f\n", ox + radius * cos(angle), oy + radius * sin(angle));
	angle -= M_PI*2/3.0;
	printf("%f, %f\n", ox + radius * cos(angle), oy + radius * sin(angle));
}

