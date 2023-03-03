#pragma once
#include <iostream>
#include <windows.h>

using namespace std;
//3. в файле function.h нужно :
//а) описать прототипы всех функций;
//б) сделать проверку определена ли константа, указывающая на тип данных(#ifdef INTEGER)
//в ) создать обобщающие имена функции, которым будет определена функция
//соответствующего типа в зависимости от константы, указанной в файле prog.cpp . (# define
//	show ShowInt)

//4. в файле prog.cpp нужно :
//а) в функции main вызвать все функции через переозначеные(обобщенные) имена из файла
//function.h(show())
//б) определить константу, которая указывает какой тип данных будет использоваться .
//Например INTEGER - целые данные, CHAR - символьные DOUBLE - настоящие. (# define
//	INTEGER)
//	Имя функциям нужно давать так, чтобы они отвечали своей сути.Например функция для
//	вывода значений массива целых чисел на консоль - ShowArrayInt().А, когда переопределяем
//	функцию с помощью # define то нужно давать общее имя.Например # define ShowArray
//	ShowArrayInt


//#if     // Проверка условия
//#ifdef  // Проверка на существование константы
//#ifndef // проверка на не существование константы
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



