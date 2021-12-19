#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#define SIZE 20

using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main()
{
	//new 연산자
	/*
	어떤 데이터형을 원하는지 new 연산자에게 알려주면, new 연산자는 그에 알맞은 크기의 메모리 블럭을 찾아내고
	그 블록의 주소를 리턴합니다.
	*/

	/*
	int* pointer = new int;
	delete pointer; // 사용한 메모리를 다시 메모리 풀로 환수

	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;

	cout << p3[0] << " and ";
	cout << p3[1] << ".\n";

	p3 = p3 - 1;
	delete[] p3;

	*/

	/*
	char animal[SIZE];
	char* ps;

	cout << "동물 이름 입력\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << animal << (int*)animal << endl;
	cout << ps << (int*)ps << endl;
	*/

	MyStruct* temp = new MyStruct;
	cout << "이름입력\n";
	cin >> temp->name;

	cout << "나이\n";
	cin >> (*temp).age;

	return 0;
}