//Lab1
//Define class GradeBook with a member function DisplayMessage
#include <iostream>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	// function that display a message to the GradeBook user
	void DisplayMessage()
	{
		cout << "Welcome to the Grade Book!" << endl;
	}
};

//	function main begins program execution
int main()
{
	GradeBook myGradeBook; // create a GradeBook object
	myGradeBook.DisplayMessage(); //call function to display
	return 0;
}
