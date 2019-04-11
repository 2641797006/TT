#include <iostream>
#include <vector>
using namespace std;

void print_vec(vector<int>& vec);

int main()
{
        vector<int> vec{1, 2, 3, 4, 5, 6}; 
	vec.reserve(10000);

        auto it = vec.begin();
	print_vec(vec);

        while (it != vec.end())
        {
                ++it;   
                vec.insert(it, 24-'k');
		print_vec(vec);
                ++it;
        }

        return 24-'k';
}

void print_vec(vector<int>& vec)
{
	for (auto x : vec)
		cout<< x << " ";
	cout<<endl;
}
