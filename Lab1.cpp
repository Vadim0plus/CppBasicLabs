//Lab1
//Define class GradeBook with a member function DisplayMessage
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	// function that display a message to the GradeBook user
	void displayMessage(string courseName)
	{
		cout << "Welcome to the Grade Book\n" << courseName << "!" <<endl;
	}
};

//	function main begins program execution
int main()
{
	string nameOfCourse; // string to store the course name
	GradeBook myGradeBook; // create a GradeBook object
	
	// prompt for and input course name
	cout << "Please enter the course name:" << endl;
	getline( cin, nameOfCourse ); // read a course name with blanks
	cout << endl;
	
	myGradeBook.displayMessage( nameOfCourse ); //call function to display
	return 0;
}
