#include <iostream>

#include "Student.h"
#include "Degree.h"
#include "Roster.h"


using namespace std;

int main ()
{
	cout << "Scripting and Programming - Applications – C867" << endl;
	cout << "Visual C++ 2019" << endl;
	cout << "Brennan Laird  " << " WGU ID: 001415733 \n" << endl;
	//Github https://github.com/brennanlaird/C867
	
	
	

	
	Roster classRoster; //creates an instance of the Roster class 
	
	classRoster.printAll();
	




	/*	F.  Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:
	  1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
	  2.  Create an instance of the Roster class called classRoster.
	  3.  Add each student to classRoster.
	  4.  Convert the following pseudo code to complete the rest of the  main() function:
	    classRoster.printAll();
	    classRoster.printInvalidEmails();
	    //loop through classRosterArray and for each element:
		classRoster.printAverageDaysInCourse(/*current_object's student id);
		classRoster.printByDegreeProgram(SOFTWARE);
		classRoster.remove("A3");
		classRoster.printAll();
		classRoster.remove("A3");
		//expected: the above line should print a message saying such a student with this ID was not found.
		5.  Implement the destructor to release the memory that was allocated dynamically in Roster.
			*/
	
	

	return(0);
}