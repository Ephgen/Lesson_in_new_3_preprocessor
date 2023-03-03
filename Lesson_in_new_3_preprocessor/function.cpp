#include "function.h"
#include <iostream>
#include <windows.h>

using namespace std;

//�) ������� ��� ���������� ������� ���������� ����������;
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

//2. � ����� function.cpp ���������� �������� ��������� ������� ��� ������ � ��������
//������ :

//�) ������� ��� ������ �������� ������� �� �������;
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
//�) ������� ��� ������ ������������ ��������;
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
//�) ������� ��� ������ ������������� ��������;
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
//�) ������� ��� ����������;
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
//�) ������� ��� �������������� �������� �������.
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
//������ ������� ���������� �������� ��� ������ � �������� �����, �������������� �
//���������� ��������. (��� ������� ���� �������� ��������� �������)
