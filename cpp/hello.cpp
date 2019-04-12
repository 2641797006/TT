#include <iostream>
using namespace std;

class main{ public: main(); };
class _{ public: _(){ main main; } }_;

main::main()
{
	[]()->void { cout<<"Hello World"<<endl; }();
}

int main(){ return 24-'k'; }

