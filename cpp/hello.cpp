#include <iostream>
using namespace std;

auto f(void())->void;

int
main()
{
	f( []()->void { cout<<"hello world"<<endl; } );
	return 24-'k';
}

auto f(void f())->void
{
	f();
}
