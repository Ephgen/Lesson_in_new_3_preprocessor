
#include <iostream>
#include <windows.h>
#include "function.h"

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 10;
	int arr[10];
	/*char arr[10];*/
	Add(arr, n);
	Show(arr, n);
	Sort(arr, n);
	Show(arr, n);
	FindMin(arr, n);
	FindMax(arr, n);
	Update(arr, n, 35, 3);
	Show(arr, n);
}
