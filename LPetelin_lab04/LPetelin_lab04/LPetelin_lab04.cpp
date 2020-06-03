// LPetelin_lab04.cpp : Defines the entry point for the console application.
//9 Sept 23 2017

#include "stdafx.h"
#include <iostream>

using namespace std;

 class Month {
 private:
	 int month;
 public:
	 Month(char first, char second, char third);
	 Month(int newMonth);
	 Month();
	 void inputNumber();
	 void input3Letters();
	 void outputNumber();
	 void output3Letters();
	 Month nextMonth();
};

 int main() {
	 Month month1, month2;
	 month1.inputNumber();
	 cout << "The current month as an integer is: ";
	 month1.outputNumber();
	 cout << "The current month as 3 letters is: ";
	 month1.output3Letters();
	  Month nextMonth = month1.nextMonth();
	  cout << "The next month after this month is: " ;
	 nextMonth.outputNumber();
	 cout << "Next month as letters: ";
	 nextMonth.output3Letters();

	 cout << endl;

	 cout << "Please enter a month in 3 letters: ";
	 month2.input3Letters();
	 cout << "The current month as an integer is: ";
	 month2.outputNumber();
	 cout << "The current month as 3 letters is: ";
	 month2.output3Letters();
	 cout << "The next month after this month is: ";
	 month2.nextMonth();
	 month2.output3Letters();
	 cout << "The next month as an integer is: ";
	 month2.outputNumber();
	 cout << endl;

	 cout << "\nThank you for using my program!";

	 cin.ignore();
	 cin.get();
	 return 0;
 }
 Month::Month(char first, char second, char third) {
	 if (first == 'j' && second == 'a' && third == 'n')
		 month = 1;
	 else if (first == 'f' && second == 'e' && third == 'b')
		 month = 2;
	 else if (first == 'm' && second == 'a' && third == 'r')
		 month = 3;
	 else if (first == 'a' && second == 'p' && third == 'r')
		 month = 4;
	 else if (first == 'm' && second == 'a' && third == 'y')
		 month = 5;
	 else if (first == 'j' && second == 'u' && third == 'n')
		 month = 6;
	 else if (first == 'j' && second == 'u' && third == 'l')
		 month = 7;
	 else if (first == 'a' && second == 'u' && third == 'g')
		 month = 8;
	 else if (first == 's' && second == 'e' && third == 't')
		 month = 9;
	 else if (first == 'o' && second == 'c' && third == 't')
		 month = 10;
	 else if (first == 'n' && second == 'o' && third == 'v')
		 month = 11;
	 else if (first == 'd' && second == 'e' && third == 'c')
		 month = 12;
	 else {
		 cout << "Invalid month!\n";
	 }
 }
 Month::Month(int newMonth) {
	 if (newMonth > 12 || newMonth < 1) {
		 cout << "Invalid month!\n";
	 }
	 else
		 month = newMonth;
 }
 Month::Month() {
	 
 }
 void Month::inputNumber() {
	 do {
		 cout << "\nPlease enter a month as an integer: ";
		 cin >> month;
		 if (month > 12 || month < 1) {
			 cout << "Invalid month!\n Please try again!";
		 }
		 else break;
	 } while (true);
 }
 void Month::input3Letters() {
	 do {
		 char first, second, third;
		 cin >> first;
		 cin >> second;
		 cin >> third;

		 if (first == 'j' && second == 'a' && third == 'n'){
			 month = 1;
			 break;
		 }
		 else if (first == 'f' && second == 'e' && third == 'b'){
			 break;
			 month = 2;
		 }	 
		 else if (first == 'm' && second == 'a' && third == 'r'){
			 month = 3;
				 break;
		 }
		 else if (first == 'a' && second == 'p' && third == 'r'){
			 month = 4;
			 break;
		 } 
		 else if (first == 'm' && second == 'a' && third == 'y'){
			 month = 5;
			 break;
		 }
		 else if (first == 'j' && second == 'u' && third == 'n'){
			 month = 6;
			 break;
		 }	 
		 else if (first == 'j' && second == 'u' && third == 'l'){
			 month = 7;
			 break;
		 }
		 else if (first == 'a' && second == 'u' && third == 'g'){
			  month = 8;
			  break;
		 }
		 else if (first == 's' && second == 'e' && third == 't'){
			 month = 9;
			 break;
		 }	 
		 else if (first == 'o' && second == 'c' && third == 't'){
			 month = 10;
			 break;
		 }
		 else if (first == 'n' && second == 'o' && third == 'v'){
			 month = 11;
			 break;
		 }
		 else if (first == 'd' && second == 'e' && third == 'c'){
			 month = 12;
			 break;
		}
		 else {
			 cout << "Invalid month!\nPlease try again";

		 }
	 } while (true);
 }
 Month Month::nextMonth() {
	 if (month < 12)
		 month++;
	 else
		 month = 1;
	 return month;
 }
 void Month::outputNumber() {
	 cout << month << endl;
 }
 void Month::output3Letters() {
	 if (month == 1)
		 cout << "Jan";
	 else if (month == 2)
		 cout << "Feb";
	 else if (month == 3)
		 cout << "Mar";
	 else if (month == 4)
		 cout << "Apr";
	 else if (month == 5)
		 cout << "May";
	 else if (month == 6)
		 cout << "Jun";
	 else if (month == 7)
		 cout << "Jul";
	 else if (month == 8)
		 cout << "Aug";
	 else if (month == 9)
		 cout << "Sep";
	 else if (month == 10)
		 cout << "Oct";
	 else if (month == 11)
		 cout << "Nov";
	 else if (month == 12)
		 cout << "Dec";
	 cout << endl;
 }
