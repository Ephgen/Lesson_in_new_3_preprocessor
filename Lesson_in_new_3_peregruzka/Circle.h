#pragma once
#include <iostream>

class Circle
{
	double radius;
	const double PI = 3.14;

public:
	Circle(double r) : radius{ r } {}
	Circle() :Circle(0) {}

	friend bool operator==(Circle& c1, Circle& c2) {
		return c1.radius == c2.radius;
	}
	bool operator == (Circle& c) {
		return this->radius == c.radius;
	}
	bool operator>(Circle& c) {
		return this->GetLenth() > c.GetLenth();
	}
	void operator+=(double r) {
		this->radius += r;
	}
	void operator -=(double r) {
		this->radius -= r;
	}
private:
	double GetLenth() {
		return 2 * radius * PI;
	}
};

