#include "stdafx.h"
#include "Figure.h"
#include <iostream>
using namespace std;

Figure::Figure()
{
}


Figure::~Figure()
{
}

void Figure::erase() {
	cout << "Figure::erase(), the erase() function in the Figure class was called." << endl;
}
void Figure::draw() {
	cout << "Figure::draw(), the draw() function in the Figure class was called." << endl;
}
void Figure::center() {
	cout << "Figure::center(), the center() function in the Figure class was called." << endl;
	erase();
	draw();
}
