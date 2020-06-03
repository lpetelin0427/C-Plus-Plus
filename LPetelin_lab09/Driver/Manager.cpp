#include "stdafx.h"
#include "Manager.h"

bool Manager::Login(string username, string password) {
	if (Identity::validate(username,  password) == 1)
		return true;
	else
		return false;
}
