//Lab1: GradeBook.cpp
//GradeBook member-function definitions.
#include <iostream>
#include "GradeBook.h"
using namespace std;

// constructor initializes CourseName
GradeBook::GradeBook( string name )
{
	setCourseName( name );
}
	
// function that sets the course name
void GradeBook::setCourseName( string name )
{
	if( name.length() <= 25 )
	courseName = name;
	else
	{
	//set courseName to first 25 characters
	courseName = name.substr( 0, 25 );
	
	cout << "Name \"" << name << "\" exceeds max length 25.\n"
		<< "Limiting courseName to first 25 chars.\n" << endl;
	}
}
	
// function that gets the course name
string GradeBook::getCourseName()
{
	return courseName;
}
	
// function that display a message to the GradeBook user
void GradeBook::displayMessage()
{
	cout << "Welcome to the Grade Book for\n" << getCourseName() << "!" <<endl;
}

void GradeBook::determineClassAverage()
{
	int total; // sum of grades
	int gradeCounter; // number of the grade to be entered next
	int grade; // grade value entered by user
	int average; // average of grades
	
	//Initialization phase
	total = 0;
	gradeCounter = 1;
	
	//Processing phase
	while ( gradeCounter <= 10)
	{
		cout << "Enter grade: ";
		cin >> grade;
		total = total + grade;
		gradeCounter = gradeCounter + 1;
	}
	
	//termination phase
	average = total / 10;
	cout << "\nTotal of all 10 grades is " << total << endl;
	cout << "Class average is " << average << endl;
}

