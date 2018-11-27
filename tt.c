#include <stdio.h>
//#include <C:\Users\26417\Desktop\stack.h>
#include <C:\Users\26417\Desktop\SqStack\pSqStackX.h>
int main(){
InitStack();
	int a1, a2;
	float f1, f2;
	char c1, c2;

	a1=666;
	a2=0;

	printf("a2=%d\n", a2);
	push(a1);
PrintStack();
	pop(&a2);
	printf("a2=%d\n", a2);

	f1=3.14159;
	f2=0;
PrintStack();
	printf("f2=%f\n", f2);
	push(f1);
PrintStack();
	pop(&f2);
PrintStack();
	printf("f2=%f\n", f2);

	c1='A';
	c2='0';

	printf("c2=%c\n", c2);
	push(c1);
PrintStack();
	pop(&c2);
PrintStack();
	printf("c2=%c\n", c2);

}