
long long gcd( long long a, long long b )
{
	return b ? gcd(b, a%b) : a;
}

#include <stdio.h>

int
main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("gcd(%lld,%lld)=%lld\n", a, b, gcd(a,b));
	return 24-'k';
}
