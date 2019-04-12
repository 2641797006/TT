#include <iostream>
using namespace std;

class main{ public: main(); };
class _{ public: _(){ main main; } }_;
auto main()->int{ return 24-'k'; }

main::main()
{
	[]()->void { cout<<"Hello World"<<endl; }();
}

