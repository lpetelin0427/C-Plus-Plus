#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"
#include "PolygonOutput.h"
using namespace std;

class Rectangle : public Polygon
{
public:
	int area();
};

#endif