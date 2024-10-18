#include <iostream>
#define SIZE 5

using namespace std;

int main()
{
	//1 task
	/*int a[SIZE] = { 1, 2, 3, 4,5 };
	int b[SIZE];
	int* pa = a;
	for (int i = 0; i < SIZE; i++) {
		b[i] = *(pa+i);
	}
	for (int i = 0; i < SIZE; i++) {
		cout << b[i] << " ";
	}*/


	//2 task
	/*int a[SIZE] = { 1, 2, 3, 4,5 };
	int* pa = a;
	for (int i = SIZE-1; i >= 0; i--) {
		cout << *(pa + i) << " ";
	}*/


	//3 task
	int a[SIZE] = { 1, 2, 3, 4,5 };
	int b[SIZE];
	int* pa = a;
	int g = 0;
	for (int i = SIZE - 1; i >= 0; i--) {
		b[g] = *(pa+i);
		g += 1;
	}
	for (int i = 0; i < SIZE; i++) {
		cout << b[i] << " ";
	}
}