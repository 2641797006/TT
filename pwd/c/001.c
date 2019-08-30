#include <stdio.h>

//int mkdirs(const char*);
void cat(FILE *fp);

int
main()
{
	char s[0x20];
	int i;
	FILE *fp=fopen("001.c", "r");
	cat(fp);
	fclose(fp);
}
