#include <iostream>

class main{ public: main(); };
class _{ public: _(){ main main; } }_;
auto main()->int{ return 24-'k'; }

using namespace std;

main::main()
{
	[]()->void { cout<<"Hello World"<<endl; }();
}

