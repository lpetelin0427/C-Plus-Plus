// LPetelin_lab07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct course {
	int courseKey;
	string courseName;
};
struct player {
	int playerKey;
	string playerName;
};

istream& operator >> (istream& inputstream, course& currentCourse) {
	inputstream >> currentCourse.courseKey >> currentCourse.courseName;

	return inputstream;
}
int main()
{

	player players[5];
	course courses[15];
	string line;
	ifstream courseInfo("courseInfo.txt");
	ifstream playerInfo("playerInfo.txt");
	ifstream playerCourses("playerCourses.txt");

	cout << "Welcome to the Course Reporter" << endl;
	system("pause");
	cout << endl;

	if (courseInfo.is_open()) {
		int courseIndex = 0;
		while (!courseInfo.eof()) {
			courseInfo >> courses[courseIndex].courseKey;
			getline(courseInfo, courses[courseIndex].courseName);
			courseIndex++;
		}
		if (courseIndex == 0)
			cout << "\n *** No course recds read *** \n";
		courseInfo.close();

	}
	else
		cout << "Unable to open file";

	if (playerInfo.is_open()) {
		int playerIndex = 0;
		while (!playerInfo.eof()) {
			playerInfo >> players[playerIndex].playerKey;
			getline(playerInfo, players[playerIndex].playerName);
			playerIndex++;
		}
		if (playerIndex == 0)
			cout << "\n *** No customer recds read *** \n";
		playerInfo.close();

	}
	else
		cout << "Unable to open file";

	do {
		int playersKey = 0;
		playerCourses >> playersKey;
		bool playerFound = false;
		int index;
		for (index = 0; index < 5; index++)
			if (playersKey == players[index].playerKey) {
				playerFound = true;
				break;
			}
		if (playerFound)
		{
			cout << "Player " << players[index].playerKey << " is " << players[index].playerName << endl;

			int coursesKey = 0;
			int courseCounter = 1;
			do {
				playerCourses >> coursesKey;
				bool courseFound = false;

				for (index = 0; index < 15; index++)
					if (coursesKey == courses[index].courseKey) {
						courseFound = true;
						break;
					}
				if (courseFound)
					cout << "	Course: " << courseCounter << " " << courses[index].courseName << endl;
				else if (coursesKey == -1)
					cout << endl;
				else
					cout << "	Course: #" << coursesKey << " name is not on file" << endl;
				courseCounter++;

			} while (coursesKey != -1);
		}
	} while (!playerCourses.eof());

	cout << endl;
	cout << endl;
	cout << "Thanks for using the Course Reporter" << endl;
	system("pause");
	return 0;
}