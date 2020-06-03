#pragma once
#ifndef IDENTITY_H
#define IDENTITY_H
#include <string>
using namespace std;
class Identity {
private:
	static int userNumber;
	public: 
		static int validate(string username, string password);
};

#endif