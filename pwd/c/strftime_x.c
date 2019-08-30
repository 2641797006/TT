#include <time.h>

void
strftime_x(char *buf, int size, const char *fmt)
{
	time_t rawtime;
	struct tm *ptm;
	time(&rawtime);
	ptm=localtime(&rawtime);
	strftime(buf, size, fmt, ptm);
}
