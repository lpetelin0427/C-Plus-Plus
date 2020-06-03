//Luke Petelin
//Lab 03
//16 September 2017

#include "stdafx.h"
#include <iostream>

using namespace std;

class IceCreamStand {
	int iceCreamStandID;
	int iceCreamSold;

public:
	IceCreamStand();
	IceCreamStand(int newID, int newSold);
	void setID(int newID);
	void setSold(int newSold);
	int getID();
	int getSold();
	void JustSold();
	static int totalUnits;
	static int getTotalUnits();
	void displaySold();
	void displayTotalUnits();
};
int IceCreamStand::totalUnits = 0;
IceCreamStand::IceCreamStand() {
	iceCreamStandID = 0;
	iceCreamSold = 0;
}
IceCreamStand::IceCreamStand(int newID, int newSold) {
	iceCreamStandID = newID;
	iceCreamSold = newSold;
}
void IceCreamStand::setID(int newID) {
	iceCreamStandID = newID;
}
void IceCreamStand::setSold(int newSold) {
	iceCreamSold = newSold;
}
int IceCreamStand::getID() {
	return iceCreamStandID;
}
int IceCreamStand::getSold() {
	return iceCreamSold;
}
void IceCreamStand::JustSold() {
	iceCreamSold++;
	totalUnits++;
}
int IceCreamStand::getTotalUnits() {
	return totalUnits;
}
void IceCreamStand::displaySold() {
	cout << "Current sales for Ice Cream Stand: " << getID() <<  ": " << getSold() << endl;
}
void IceCreamStand::displayTotalUnits() {
	cout << "Total Units: " << getTotalUnits() << endl << endl;
}
int main()
{
	cout << "Welcome to the Ice Cream Stand calculator!" << endl << endl;
	IceCreamStand stand01;
	IceCreamStand stand02;
	IceCreamStand stand03;
	
	stand01.setID(01);
	stand02.setID(02);
	stand03.setID(03);

	stand01.displaySold();
	stand02.displaySold();
	stand03.displaySold();
	stand01.displayTotalUnits();

	stand01.JustSold();
	stand02.JustSold();
	stand03.JustSold();

	stand01.displaySold();
	stand02.displaySold();
	stand03.displaySold();
	stand01.displayTotalUnits();

	for (int i = 0; i < 200; i++) {
		stand01.JustSold();
	}
	for (int i = 0; i < 501; i++) {
		stand02.JustSold();
	}
	for (int i = 0; i < 134; i++) {
		stand03.JustSold();
	}

	stand01.displaySold();
	stand02.displaySold();
	stand03.displaySold();
	stand01.displayTotalUnits();

	cout << "\n\nThank you for using the Ice Cream Stand Calculator!";
	cin.get();
    return 0;
}


