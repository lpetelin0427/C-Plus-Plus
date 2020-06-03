// LPetelin_lab02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class CounterType {
private:
	int counter;

public:
	CounterType();
	CounterType(int newCounter);
	void Increase();
	void Decrease();
	int getCounter();
	void outputCounter();
	void setCounter(int newCounter);
};
CounterType::CounterType() {
	counter = 0;
}
CounterType::CounterType(int newCounter) {
	counter = newCounter;
}
void CounterType::Increase() {
	counter++;
}
void CounterType::Decrease() {
	if (counter <= 0)
		counter = 0;
	else
		counter--;
}
int CounterType::getCounter() {
	return counter;
}
void CounterType::setCounter(int newCounter) {
	counter = newCounter;
}
void CounterType::outputCounter() {
	cout << "Counter: " << counter << endl;
}
int main()
{
	CounterType counters;
	counters.Increase();
	counters.outputCounter();
	counters.Decrease();
	counters.outputCounter();

	cin.get();
    return 0;
}

