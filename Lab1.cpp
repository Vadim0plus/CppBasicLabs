//Lab1: Lab1.cpp
//Driver program for GradeBook class
#include <iostream>
#include "GradeBook.h"
using namespace std;

//	function main begins program execution
int main()
{
	// create two GradeBook objects
	GradeBook gradeBook1( "CS Language Course:C++ Programming Fundamental" );
	GradeBook gradeBook2( "Operating Systems" );
	
	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
	return 0;
}
