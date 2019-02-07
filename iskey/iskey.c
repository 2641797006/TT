#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define isvchar(x)	(isalnum(x) || (x)=='_')

static const char *reserve_word[32] = {
    "auto", "break", "case", "char", "const", "continue",
    "default", "do", "double", "else", "enum", "extern",
    "float", "for", "goto", "if", "int", "long",
    "register", "return", "short", "signed", "sizeof", "static",
    "struct", "switch", "typedef", "union", "unsigned", "void",
    "volatile", "while"
};

int
main()
{
	int i, c;
	char str[21], *p;

	scanf("%20s", str);

	c=str[0];
	if (!isalpha(c) && !(c=='_')) {
		printf("no");
		return -1;
	}
	for (p=str+1 ;; p++) {
		c=*p;
		if (!c)
			break;
		if (!isvchar(c)) {
			printf("no");
			return -2;
		}
	}
	for (i=0; i<32; i++)
		if (strcmp(reserve_word[i], str)==0) {
			printf("no");
			return -3;
		}
	printf("yes");
	return 0;
}
