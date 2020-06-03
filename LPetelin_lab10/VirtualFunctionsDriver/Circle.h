#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Figure.h"
using namespace std;
class Circle : public Figure
{
public:
	Circle();
	~Circle();
	void draw();
	void erase();
private:
	int radius;
};

#endif