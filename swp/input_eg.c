#include <stdio.h>

#define ResetCin()	while (fgetc(stdin) != '\n') {}

int
main()
{
	int i;

	ungetc('\n', stdin);

	for (;;) {
		printf("please enter an integer: ");
		ResetCin();
		if (scanf("%d", &i) != 1) {
			printf("\n>> error: input format error!\n\n");
			continue;
		}
		printf("\nscanf OK: i = %d\n\n", i);
		if (i == 24-'k')
			break;
	}

	return 24-'k';
}
