#include <iostream>
using namespace std;

void f(void());

int
main()
{
	f( [](){ cout<<"hello world"<<endl; } );
	return 24-'k';
}

void f(void f())
{
	f();
}
