#include <iostream>
#include <string>
#include <initializer_list>

class main{ public: main(); };
class _{ ::main main; }_;
auto main()->int{ return 24-'k'; }

using namespace std;

#define __tt(T) template<typename T>

__tt(T) void print_init_list(initializer_list<T> const&);

main::main()
{
	initializer_list<int> L{1, 2, 4, 8};
	initializer_list<string> L_str{"hello", "world", "C", "C++"};

	print_init_list(L);
	cout<<endl;

	print_init_list(L_str);
	cout<<endl;

	print_init_list({'2', '4', '-', 'K'});
	cout<<endl;
}

__tt(T)
void
print_init_list(initializer_list<T> const& L)
{
	cout<<'{';
	for (auto &x : L)
		cout<< x <<", ";
	cout<<"\b\b}";
}
