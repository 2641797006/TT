#include <stdio.h>
int main(){
	float pi=3.1415926, r, s, v;
	printf("请输入球的半径: ");
	scanf("%f", &r);
	s=4*pi*r*r;
	v=4.0/3*pi*r*r*r;
	printf("球的表面积: %f\n", s);
	printf("球的体积: %f\n", v);
}