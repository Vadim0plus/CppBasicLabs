//Lab1: GradeBook.h
//GradeBook class definition. This file presents GradeBook's public interface
#include <string>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	GradeBook( string ); // constructor initializes CourseName
	void setCourseName( string ); // function that sets the course name
	string getCourseName(); // function that gets the course name
	void displayMessage(string courseName); // function that display a message to the GradeBook user
private:
	string courseName; // course name for this GradeBook
};
