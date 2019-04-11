#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef double(*d2_t)[2];
double (*point_xy(double ox, double oy, double radius, double angle)) [2];

int
main()
{
	double ox, oy, radius;
	double angle_fix ,angle;
	double (*c)[2];

// 原点坐标
	ox = 0, oy = 0;
// 半径
	radius = 100;
// 初始角度
	angle_fix = 90;

	angle -= angle_fix;
	c = point_xy(ox, oy, radius, angle);
	printf("%f, %f\n", (*c)[0], (*c)[1]);
	angle -= 120;
	c = point_xy(ox, oy, radius, angle);
	printf("%f, %f\n", (*c)[0], (*c)[1]);
	angle -= 120;
	c = point_xy(ox, oy, radius, angle);
	printf("%f, %f\n", (*c)[0], (*c)[1]);
}

double (*point_xy(double ox, double oy, double radius, double angle)) [2]
{
	double cx, cy, *c;

	angle = angle/180.0*M_PI;
	c = (double*) malloc (sizeof(double) * 2);
	cx = ox + radius * cos(angle);
	cy = oy + radius * sin(angle);
	c[0] = cx;
	c[1] = cy;
	return (d2_t)c;
}
