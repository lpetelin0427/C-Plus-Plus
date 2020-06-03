#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
#include "PolygonOutput.h"
class Triangle : public Polygon
{
public:
	int area();
};
#endif
