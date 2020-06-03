#include "stdafx.h"
#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
{
}


Circle::~Circle()
{
}

void Circle::draw() {
	cout << "Circle::draw(), the method circle() in the Circle class was called." << endl;
}
void Circle::erase() {
	cout << "Circle::erase(), the method erase() in the Circle class was called." << endl;
}