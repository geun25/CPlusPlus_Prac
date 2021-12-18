#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programming";

	cout << "이름이 뭐에요?\n";
	cin.getline(name1, Size);
	cout << strlen(name1) << endl;
	cout << sizeof(name1) << endl;
	cout << name2 << endl;
}