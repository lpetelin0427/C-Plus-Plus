#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Figure.h"
using namespace std;
class Rectangle : public Figure
{
public:
	Rectangle();
	~Rectangle();
	void draw();
	void erase();
private:
	int width, height;
};
#endif
