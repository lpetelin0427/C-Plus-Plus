//This program tests Programming Problem 15.1.
#include "stdafx.h"
#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"

using std::cout;

int main()
{
	Circle cir;
	cir.draw();
	cout <<
		"\nDerived class Circle object calling center( ).\n";
	cir.center(); //Calls draw and center

	Rectangle rect;
	rect.draw();
	cout <<
		"\nDerived class Rectangle object calling center( ).\n";
	rect.center(); //Calls draw and center

	system("pause");
	return 0;
}
/*
C. Explain the difference in results as a comment at the end of the main method:
	When the class definitions with no virtual functions are called, the output comes straight from the class it is in,
	Figure with no virtual functions returns the functions from the Figure class and Figure::draw(), and Figure::erase() are called.
	When they are made virtual the output when center() is called, Circle::draw() and Circle::erase() are called when the functions calls for it to be redrawn
	and erased again. This also applies to Rectangle class.


*/