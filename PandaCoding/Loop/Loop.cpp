#include <iostream>

using namespace std;
int main()
{
	// 배열 기반 반복문
	int a[10] = { 1,3,5,7,9 };

	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}

	cout << endl;

	for (int i : a)
	{
		cout << i;
	}

	return 0;
}
