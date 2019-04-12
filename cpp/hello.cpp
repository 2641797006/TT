#include <iostream>
using namespace std;

class main{ public: main(); };
class _{ public: _(){ main main; } }_;

main::main()
{
	[]()->void { cout<<"Hello World"<<endl; }();
}

auto main()->int{ return 24-'k'; }

