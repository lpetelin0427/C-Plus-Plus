// LPetelin_lab06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
void swapStuff(char& first, char& second) {
	int temp = first;
	first = second;
	second = temp;
}

int main()
{
	string sentence01;
	cout << "Welcome to the Sentence Manipulator!\n";
	do {
		cout << "\nPlease enter a sentence that is greater than or equal to 20 characters long:\n";
		getline(cin, sentence01);
		if (sentence01.length() >= 20)
			break;
		else
			cout << "\nYou did not enter enough characters in your sentence.\n";
	} while (true);

	
	
	string sentence02 = sentence01;

	char *start = &sentence02[0];
	char *end = &sentence02[sentence02.length() - 1];

	for (int i = 0; i < (sentence02.length() /2); i++) {
		swapStuff(*start, *end);
		cout << sentence02 << endl;
		*start++;
		*end--;

	}
	

	string sentence03 = sentence02;

		char *start1 = &sentence03[0];
		char *end1 = &sentence03[sentence03.length() - 1];


		for (int i = 0; i < (sentence03.length() / 2); i++) {
		if (*start1 % 2 == 0 || *end1 % 2 == 0) {
			sentence03.erase(sentence03.begin() + i);
			sentence03.erase(sentence03.end() - i);
			*start1++;
			*end1--;
		}
		else {
			cout << sentence03 << endl;
		}
			
	}


	cout << "\nSentence 01: " << sentence01 << endl;
	cout << "Sentence 02: " << sentence02 << endl;
	cout << "Sentence 03: " << sentence03 << endl;

	cout << endl;
	system("pause");
    return 0;
}

