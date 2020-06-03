#include "stdafx.h"
#include "Identity.h"

int Identity::userNumber = 0;

int Identity::validate(string username, string password) {
	if ((username == "abbott") && (password == "monday")) {
		userNumber++;
		return 1; //valid manager
	}
	else if ((username == "costello") && (password == "tuesday")) {
		userNumber++;
		return 2; //valid player
	}
	else if ((username == "who") && (password == "first")) {
		userNumber++;
		return 2; //valid player
	}
	else if ((username == "what") && (password == "second")) {
		userNumber++;
		return 2; //valid player
	}
	else 
		return -1; //invalid 

};
