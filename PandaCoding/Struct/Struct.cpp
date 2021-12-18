#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct Person
	{
		string name;
		string position;
		int height;
		int weight;
	};

	Person p = { "Son", "striker", 183, 77 };
	cout << p.name << endl;

	Person a[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	cout << a[1].height << endl;

	return 0;
}

