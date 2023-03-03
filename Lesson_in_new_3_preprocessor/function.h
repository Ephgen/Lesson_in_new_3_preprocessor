#pragma once
#include <iostream>
#include <windows.h>

using namespace std;
//3. � ����� function.h ����� :
//�) ������� ��������� ���� �������;
//�) ������� �������� ���������� �� ���������, ����������� �� ��� ������(#ifdef INTEGER)
//� ) ������� ���������� ����� �������, ������� ����� ���������� �������
//���������������� ���� � ����������� �� ���������, ��������� � ����� prog.cpp . (# define
//	show ShowInt)

//4. � ����� prog.cpp ����� :
//�) � ������� main ������� ��� ������� ����� �������������(����������) ����� �� �����
//function.h(show())
//�) ���������� ���������, ������� ��������� ����� ��� ������ ����� �������������� .
//�������� INTEGER - ����� ������, CHAR - ���������� DOUBLE - ���������. (# define
//	INTEGER)
//	��� �������� ����� ������ ���, ����� ��� �������� ����� ����.�������� ������� ���
//	������ �������� ������� ����� ����� �� ������� - ShowArrayInt().�, ����� ��������������
//	������� � ������� # define �� ����� ������ ����� ���.�������� # define ShowArray
//	ShowArrayInt


//#if     // �������� �������
//#ifdef  // �������� �� ������������� ���������
//#ifndef // �������� �� �� ������������� ���������
#define INTEGER

#ifdef INTEGER
#define Add     AddArrayInt
#define Show    ShowArrayInt
#define FindMin FindMinArrayInt
#define FindMax FindMaxArrayInt
#define Sort    SortArrayInt
#define Update  UpdateArrayInt
#endif

#ifdef DOUBLE
#define Add(arr, s) AddArrayDouble(arr, s)
#define Show(arr, s) ShowArrayDouble(arr, s)
#define FindMin(arr, s) FindMinArrayDouble(arr, s)
#define FindMax(arr, s) FindMaxArrayDouble(arr, s)
#define Sort(arr, s) SortArrayDouble(arr, s)
#define Update(arr, s, v, i) UpdateArrayDouble(arr, s, v, i)
#endif

#ifdef CHAR
#define Add(arr, s) AddArrayChar(arr, s)
#define Show(arr, s) ShowArrayChar(arr, s)
#define FindMin(arr, s) FindMinArraychar(arr, s)
#define FindMax(arr, s) FindMaxArrayChar(arr, s)
#define Sort(arr, s) SortArrayChar(arr, s)
#define Update(arr, s, v, i)  UpdateArrayChar(arr, s, v, i) 
#endif

void AddArrayInt(int* arr, int size);
void ShowArrayInt(int* arr, int size);
int FindMinArrayInt(int* arr, int size);
int FindMaxArrayInt(int* arr, int size);
void SortArrayInt(int* arr, int size);
void UpdateArrayInt(int* arr, int size, int val, int index);

void AddArrayDouble(double* arr, int size);
void ShowArrayDouble(double* arr, int size);
double FindMinArrayDouble(double* arr, int size);
double FindMaxArrayDouble(int* arr, int size);
void SortArrayDouble(double* arr, int size);
void UpdateArrayDouble(double* arr, int size, double val, int index);

void AddArrayChar(char* arr, int size);
void ShowArrayChar(char* arr, int size);
char FindMinArrayChar(double* arr, int size);
char FindMaxArrayChar(int* arr, int size);
void SortArrayChar(char* arr, int size);
void UpdateArrayChar(char* arr, int size, char val, int index);



