#include <iostream>

using namespace std;

//void helloCPP(int);
const int SIZE = 8;

int sumArr(int*, int);

int main()
{
	/*
	int times;
	cout << "정수를 입력하십시오.\n";
	cin >> times;
	helloCPP(times);
	return 0;
	*/

	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	// arr = &arr[0]
	int sum = sumArr(arr, SIZE);

	cout << "함수의 총 합은 " << sum << " 입니다.";
	return 0;
}

int sumArr(int* arr, int n)
{
	int total = 0;
	
	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;
}

void helloCPP(int n)
{
	for (int i = 0; i < n; i++)
		cout << "Hello, C++\n";
}