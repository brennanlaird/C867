#include <iostream>

#include "Student.h"
#include "Degree.h"
#include "Roster.h"


using namespace std;


int main ()
{
	cout << "Scripting and Programming - Applications : C867" << endl;
	cout << "Visual C++ 2019" << endl;
	cout << "Brennan Laird  " << " WGU ID: 001415733 \n" << endl;
	//Github https://github.com/brennanlaird/C867 - Currently set to private
	
	
	Roster classRoster; //creates an instance of the Roster class 
	
	//Prints out the full roster
	classRoster.printAll();

	cout << endl; //new line for formatting

	
	//This calls the function to display invalid emails
	classRoster.printInvalidEmails();
	
	cout << endl; //new line for formatting			  
				  
				  
	//Calls the function to print the averasge days in course, sending student ID A3
	classRoster.printAverageDaysInCourse("A3");

	cout << endl; //new line for formatting	


	//Calls the function to print by degree program and passes software as the degree program of choice
	classRoster.printByDegreeProgram(SOFTWARE);

	cout << endl; //new line for formatting	
				  
				  
	//This performs the deletion of student A3, reprints via the print all and then attempts to delete A3 again	
	
	cout << "Removing student A3" << endl;
	classRoster.remove("A3");

	//reprinting the current roster to check the deletion
	cout << endl; //new line for formatting
	classRoster.printAll();
	cout << endl; //new line for formatting

	//trying to delete A3 a second time. The expected output is an erro message
	cout << "Removing student A3 again to test the deletion" << endl;
	classRoster.remove("A3");



	cout << endl; //new line for formatting
		

	

	return(0);
 }
