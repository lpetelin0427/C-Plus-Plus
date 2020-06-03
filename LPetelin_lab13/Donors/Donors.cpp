// Donors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

enum BloodType { uknown, A, B, AB, O };
enum RhFactor { positive, negative };

struct bloodPressure {
	int systolic;
	int diastolic;
};

struct donorInfo {
	BloodType type;
	RhFactor rh;
	bloodPressure bp;
	string fname, lname;
	int heartRate;
};



struct node {
	donorInfo donor;
	node *next;
};

node *head, *current;

void addNode(string cuFname, string cuLname, int currentSystolic, int currentDiastolic) {
	node *tmp = new node;
	tmp->donor.fname = cuFname;
	tmp->donor.lname = cuLname;
	tmp->donor.bp.systolic = currentSystolic;
	tmp->donor.bp.diastolic = currentDiastolic;
	
	tmp->next = NULL;

	current = head;
	while (current->next != NULL)
		current = current->next;
	current->next = tmp;
}
void displayData() {
	if (head != NULL) {
		current = head;
		int counter = 0;
		while (current != NULL) {
			if (counter != 0) {
				cout << "Donor " << counter << ": " << current->donor.fname << " " << current->donor.lname << " \t	Blood Pressure: " << current->donor.bp.systolic << " over " << current->donor.bp.diastolic << endl;
			}
			current = current->next;
			counter++;
		}
	}
	else
		cout << "\n NO list to display\n";
}

void removePosition(int pos) {
	node *tempCurrent = new node;
	node *previous = new node;
	tempCurrent = head;
	for (int i = 1; i < pos; i++) {
		previous = tempCurrent;
		tempCurrent = tempCurrent->next;
	}
	previous->next = tempCurrent->next;
}
void insertPosition(string cuFname, string cuLname, int currentSystolic, int currentDiastolic, int pos) {
	node *pre = new node;
	node *cur = new node;
	node *tmp = new node;
	cur = head;
	for (int i = 1; i < pos; i++) {
		pre = cur;
		cur = cur->next;
	}
	tmp->donor.fname = cuFname;
	tmp->donor.lname = cuLname;
	tmp->donor.bp.systolic = currentSystolic;
	tmp->donor.bp.diastolic = currentDiastolic;

	pre->next = tmp;
	tmp->next = cur;
}
int main()
{
	cout << "Welcome to Luke Petelin's Donor Info!" << endl;
	donorInfo currentDonor;
	head = new node;
	head->donor.fname = "";
	head->donor.lname = "";
	head->donor.bp.systolic = NULL;
	head->donor.bp.diastolic = NULL;
	
	head->next = NULL;

	addNode("Adam", "Ant	", 124, 89 );
	addNode("Betty", "Bird	", 132, 80);
	addNode("Charlie" , "Critter", 111, 75);
	addNode("Daniel" , "Dustmite", 122, 82);

	displayData();

	string fname, lname;
	int siastolic, diastolic;
	cout << "\nPlease enter a new user(First name, Last name, Systolic BP, and Diastolic BP): " << endl;
	cin >> fname >> lname >> siastolic >> diastolic;
	addNode(fname, lname, siastolic, diastolic);
	
	displayData();
	
	int personRemoved;
	cout << "\nPlease enter an integer of the user you wish to be removed: " << endl;
	cin >> personRemoved;
	removePosition(personRemoved + 1);
	
	displayData();

	int insertPos;
	cout << "\nPlease enter a new user and position at which you wish to insert(First name, Last name, Systolic, Diastolic, and integer): " << endl;
	cin >> fname >> lname >> siastolic >> diastolic >> insertPos;
	insertPosition(fname, lname, siastolic, diastolic, insertPos + 1);

	displayData();

	cout << endl;
	system("pause");
    return 0;
}

