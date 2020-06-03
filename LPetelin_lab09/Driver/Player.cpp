#include "stdafx.h"
#include "Player.h"

bool Player::Login(string username, string password) {
	if (Identity::validate(username, password) == 1 || Identity::validate(username, password) == 2)
		return true;
	else
		return false;
}