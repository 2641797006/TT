#include <stdio.h>
#include </home/cpplay/git/lib_c/h/prand.h>

int rand_strf(FILE *fp, int n, int *a/*a[3]*/)
{
	int i;
	float P[3];
	if(!a){
		int arr[3]={10, 26, 26};
		a=arr;
	}
	set_hitp(a, 3, P);
	for(i=0;i<n;i++)
		switch(rand_hit(P)){
		case 0:
			fputc(prand()%10+0x30, fp);
		break;
		case 1:
			fputc(prand()%26+0x41, fp);
		break;
		case 2:
			fputc(prand()%26+0x61, fp);
		break;
		}
}
