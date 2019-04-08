#include <iostream>
using namespace std;

class number
{
  public:
	int i;

	friend ostream& operator<<(ostream& out, number const& num)
	{
		out<<num.i;
		return out;
	}

};

int
main()
{
	number n;
	n.i = 24-'k';
	cout<<n<<endl;
}
