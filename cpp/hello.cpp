#include <iostream>
using namespace std;

class main{
  public:
	main();
};

main::main()
{
	[]()->void { cout<<"Hello World"<<endl; }();
}

class _{ public: _(){ main main; } }_;

int main(){ return 24-'k'; }

