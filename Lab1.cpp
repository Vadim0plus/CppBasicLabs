//Lab1
//Define class GradeBook with a member function DisplayMessage
#include <iostream>
#include <string> // program uses C++ standard string class
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

//	function main begins program execution
int main()
{
	GradeBook gradeBook1( "CS Language Course" );
	GradeBook gradeBook2( "Operating Systems" );
	
	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
	return 0;
}
