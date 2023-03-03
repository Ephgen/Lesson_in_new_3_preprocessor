
#include <iostream>
#include <windows.h>
#include "Circle.h"

using namespace std;

//Создайте класс Circle(окружность) :
//	■ Реализуйте через перегруженные операторы;
//■ Проверка на равенство радиусов двух окружностей(
//	операция == );
//■ Сравнения длин двух окружностей(операция > ).
//Пропорциональное изменение размеров окружности, путем
//изменения ее радиуса(операция += и -= )

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Circle circle1(5);
	Circle circle2(9);

	if (circle1 == circle2) cout << "Equals" << endl;
	else cout << "Non equals" << endl;
	if (circle1 > circle2) cout << "Circle1";
	else cout << "Circle2";

}
