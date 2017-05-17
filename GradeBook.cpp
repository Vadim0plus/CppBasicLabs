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
	courseName = name;
}
	
// function that gets the course name
string GradeBook::getCourseName()
{
	return courseName;
}
	
// function that display a message to the GradeBook user
void GradeBook::displayMessage(string courseName)
{
	cout << "Welcome to the Grade Book\n" << getCourseName() << "!" <<endl;
}

