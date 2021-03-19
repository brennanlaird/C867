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
		
	/*

	//This is where the add function is called. It is commented out as there was no requirement in the rubric to perform an add
	//The function can be tested by simply uncommenting at the appropriate places. At the time of submission the comment flags on line 63 and 160 can be deleted and the code will run
	//Note that the inputs collected here do not implment error checking
	//For the purposes of this assignment it is assumed the user will enter valid data
	//To demonstrate the functionality the user can enter new data or select from the hard coded default option


	string add_student_id, add_fname, add_lname, add_email, degree_string;
	int add_age, add_days0, add_days1, add_days2;
	DegreeProgram add_degree;

	int menu_choice;

	cout << "Select an option:" << endl;
	cout << "Press 1 to accept default" << endl;
	cout << "Press 2 to enter data" << endl;
	cin >> (menu_choice);

	//determine the action to take based off the user entry
	switch (menu_choice) {
	case 1:
		//set the default values
		add_student_id = "A6";
		add_fname = "Phillip";
		add_lname = "Fry";
		add_email = "pannuccisdelivers@yahoo.com";
		add_age = 47;
		add_days0 = 75;
		add_days1 = 90;
		add_days2 = 150;
		add_degree = NA;

		break;

	case 2:
		//implement data entry

		cout << " Enter Student ID" << endl;
		cin >> (add_student_id);
		cout << " Enter First Name" << endl;
		cin >> (add_fname);
		cout << " Enter Last Name" << endl;
		cin >> (add_lname);
		cout << " Enter Student email" << endl;
		cin >> (add_email);
		cout << " Enter Student age" << endl;
		cin >> (add_age);
		cout << " Enter Days in Course 1" << endl;
		cin >> (add_days0);
		cout << " Enter Days in Course 2" << endl;
		cin >> (add_days1);
		cout << " Enter Days in Course 3" << endl;
		cin >> (add_days2);

		cout << "Enter the degree program (SOFTWARE, NETWORK, SECURITY)" << endl;
		cin >> (degree_string); //uses a string to catch user input and if statements follow to set the enum value

		if (degree_string == "SOFTWARE")
			add_degree = SOFTWARE;
		else if (degree_string == "NETWORK")
			add_degree = NETWORK;
		else if (degree_string == "SECURITY")
			add_degree = SECURITY;
		else {
			add_degree = NA;
			cout << "Default degree set" << endl;
		}

		break;

	default: //implment error message and proceed with default

		cout << "Invalid entry. Proceeding with default" << endl;

		add_student_id = "A6";
		add_fname = "Phillip";
		add_lname = "Fry";
		add_email = "pannuccisdelivers@yahoo.com";
		add_age = 47;
		add_days0 = 75;
		add_days1 = 90;
		add_days2 = 150;
		add_degree = NA;
		break;
	}
	
	cout << endl; //new line for formatting
	
	classRoster.add(add_student_id, add_fname, add_lname, add_email, add_age, add_days0, add_days1, add_days2, add_degree);
	
	classRoster.printAll();
	
	cout << endl; //new line for formatting

	
	*/



	//Destructor outputs are displayed as the final outputs. The expected output is that the text from the roster destructor will be displayed.
	

	return(0);
 }
