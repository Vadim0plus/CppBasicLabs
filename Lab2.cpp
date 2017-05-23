//Lab2: Lab2.cpp
//Driver program for GradeBook class
#include <iostream>
#include "GradeBook.h"
using namespace std;

//	function main begins program execution
int main()
{
	// create GradeBook object
	GradeBook myGradeBook( "C++ Programming" );
	
	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.determineClassAverage(); // find average
	return 0;
}
