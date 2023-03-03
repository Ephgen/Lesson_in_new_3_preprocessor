#include "function.h"
#include <iostream>
#include <windows.h>

using namespace std;

//а) функцию для заполнения массива случайными значениями;
void AddArrayInt(int* arr, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}
void AddArrayDouble(double* arr, int size) {
	srand(time(0));
for (int i = 0; i < size; i++) {
	arr[i] = rand() % 10 + (double)(rand() % 100) / 100;
}
}
void AddArrayChar(char* arr, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = 32 + rand() % 255;
	}
}

//2. в файле function.cpp необходимо написать следующие функции для работы с массивом
//данных :

//б) функцию для вывода значений массива на консоль;
void ShowArrayInt(int* arr, int size) {
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
void ShowArrayDouble(double* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
void ShowArrayChar(char* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
//в) функцию для поиска минимального элемента;
int FindMinArrayInt(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double FindMinArrayDouble(double* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
char FindMinArrayChar(double* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
//г) функцию для поиска максимального элемента;
int FindMaxArrayInt(int* arr, int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double FindMaxArrayDouble(int* arr, int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
char FindMaxArrayChar(int* arr, int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
//д) функцию для сортировки;
void SortArrayInt(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}
void SortArrayDouble(double* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}
void SortArrayChar(char* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}
//е) функцию для редактирования значения массива.
void UpdateArrayInt(int* arr, int size, int val, int index){
	if (index > size - 1 && index >= 0)
	arr[index] = val;
}
void UpdateArrayDouble(double* arr, int size, double val, int index) {
	if (index > size - 1 && index >= 0)
		arr[index] = val;
}
void UpdateArrayChar(char* arr, int size, char val, int index) {
	if (index > size - 1 && index >= 0 && val <= 255 && val >= 32)
		arr[index] = val;
}
//Данные функции необходимо написать для работы с массивом целых, действительных и
//символьных значений. (Для каждого типа написать отдельную функцию)
