#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define isvchar(x)	(isalnum(x) || (x)=='_')

static char reserve_word[32][20] = {
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
	int i;
	char str[21];

	scanf("%20s", str);

	if (!isalpha(str[0]) && !(str[0]=='_')) {
		printf("no");
		return -1;
	}
	for (i=1; i<20; i++) {
		if (!str[i])
			break;
		if (!isvchar(str[i])) {
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
