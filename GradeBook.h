//Lab1: GradeBook.h
//Header for GradeBook class
#include <iostream>
#include <string>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	// constructor initializes CourseName
	GradeBook( string name )
	{
		setCourseName( name );
	}
	
	// function that sets the course name
	void setCourseName( string name )
	{
		courseName = name;
	}
	
	// function that gets the course name
	string getCourseName()
	{
		return courseName;
	}
	
	// function that display a message to the GradeBook user
	void displayMessage(string courseName)
	{
		cout << "Welcome to the Grade Book\n" << getCourseName() << "!" <<endl;
	}
private:
	string courseName; // course name for this GradeBook
};
