// LPetelin_lab08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


struct course {
	int courseKey;
	string courseName;
};

istream& operator >> (istream& inputstream, course& currentCourse) {
	inputstream >> currentCourse.courseKey >> currentCourse.courseName;

	return inputstream;
}
int main()
{
	course courses[15];
	ifstream courseInfo("courseInfo.txt");
	ifstream courseDetail("courseDetail.txt");
	ofstream fout;
	cout << "Welcome to the Golf Reporter" << endl;
	system("pause");
	cout << endl;
	fout.open("courseReport.txt");
			if (fout.fail()) {
				cout << "Output file opening failed.\n";
				exit(1);
			}
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
int courseDetailIndex = 0;
	if (courseDetail.is_open()) {
		
		while (!courseDetail.eof()) {
			int courseKey, courseNumberOfHoles;
			double courseRating;
			double courseSlope;
			courseDetail >> courseKey >> courseNumberOfHoles >> courseRating >> courseSlope;
			int index = 0;
		
			for (index = 0; index < 15; index++) {
				if (courseKey == courses[index].courseKey) {
					cout << setw(25) << "Course name: " << courses[index].courseName << endl;
					fout << setw(25) << "Course name: " << courses[index].courseName << endl;
					cout << setw(4) << "Number of holes: " << courseNumberOfHoles << endl;
					fout << setw(4) << "Number of holes: " << courseNumberOfHoles << endl;

					cout.setf(ios::fixed);
					cout.setf(ios::showpoint);
					cout.precision(1);
					cout << setw(7) << "Course Rating: " << courseRating << endl;

					fout.setf(ios::fixed);
					fout.setf(ios::showpoint);
					fout.precision(1);
					fout << setw(7) << "Course Rating: " << courseRating << endl;

					cout.precision(0);
					cout << setw(5) << "Course Slope: " << courseSlope << endl;
					fout.precision(0);
					fout << setw(5) << "Course Slope: " << courseSlope << endl;

					double slopePercent = courseSlope / 113;
					cout.precision(3);					
					cout << setw(6) << "Slope Percent: " << slopePercent << endl;

					fout.precision(3);
					fout << setw(6) << "Slope Percent: " << slopePercent << endl;

				courseDetailIndex++;
				}
				if (courseKey > 15) {
					cout << "*** Unknown Course Name: #" << courseKey << " ***" << endl;
					
					break;
				}

			}
			
		}
		if (courseDetailIndex == 0)
			cout << "\n *** No customer recds read *** \n";
		courseDetail.close();
	}
	else
		cout << "Unable to open file";

	cout << "Courses Processed: " << courseDetailIndex;
	fout << "\n\nCourses Processed: " << courseDetailIndex;
	fout.close();
	cout << "\n\nThank you for using the Golf Reporter" << endl;
	cout << endl;
	system("pause");
    return 0;
}

