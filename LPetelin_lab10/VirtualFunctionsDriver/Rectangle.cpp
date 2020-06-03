#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}
void Rectangle::draw() {
	cout << "Rectangle::draw(), the method circle() in the Rectangle class was called." << endl;
}
void Rectangle::erase() {
	cout << "Rectangle::erase(), the method erase() in the Rectangle class was called." << endl;
}