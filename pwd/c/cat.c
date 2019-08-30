#include <stdio.h>
#include <ctype.h>

void
cat(FILE *fp)
{
	int c;
	long cur=ftell(fp);
	rewind(fp);
	while(!feof(fp)){
		c=fgetc(fp);
		if(isprint(c)||isspace(c))
			fputc(c, stdout);
	}
	fseek(fp, cur, SEEK_SET);
}
