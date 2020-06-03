// Driver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Identity.h"
#include "Manager.h"
#include "Player.h"

using namespace std;
string loginInfo(string username, string password);
int main()
{
	cout << "CREDENTIAL VERIFICATION\n";

	//In the word document you posted, the if statement checks for "abbott", but the invocations at the bottom of the document check for "abott", I assume this is 
	//a mistake so I went ahead and checked for abbott instead of abott. Either way the logic and functionality is the same.
	cout << "\nabbott, monday: " << loginInfo("abbott" , "monday") << endl;
	cout << "costello, tuesday: " << loginInfo("costello", "tuesday") << endl;
	cout << "abbott, first: " << loginInfo("abbott", "first") << endl;
	cout << "costello, monday: " << loginInfo("costello", "monday") << endl;
	cout << "who, first: " << loginInfo("who", "first") << endl;
	cout << "what, second: " << loginInfo("what", "second") << endl;
	cout << "who, second: " << loginInfo("who", "second") << endl;
	cout << "first, who: " << loginInfo("first", "who") << endl;

	cout << "\nThanks for verifying your credentials!";

	cout << endl;
	system("pause");
	return 0;
}


string loginInfo(string username, string password){
	if (Manager::Login(username, password))
		return "MANAGER";
	else if (Player::Login(username, password))
		return "PLAYER";
	return "INVALID LOGIN";
}