#include <iostream>
#include <sstream>
#include <vector>
#include <string>


#include "Roster.h"
#include "Degree.h"


using namespace std;

//This is the input as specified by the assignment.
const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Brennan,Laird,blair10@wgu.edu,41,7,14,18,SOFTWARE" };


//String for dereferencing from the enum - This might be better in a more global location?
string degree_array[] = { "SECURITY", "SOFTWARE", "NETWORK", "NA" };

//sets the size of the table to a variable for use in loop increments
int table_size = sizeof(studentData) / sizeof(string);


//Constructor for the roster object
Roster::Roster() {

	//initializes a new student for each position in the array of pointers and populate that from the student data table
	for (int i = 0; i < table_size; i++) {
		classRosterArray[i] = new Student;

		//Temporary variable for adding parsing the table input into a student object
		string temp_student_id, temp_first_name, temp_last_name, temp_student_email, age_string, day0_string, day1_string, day2_string, degree_string;
		int temp_student_age, temp_day0, temp_day1, temp_day2;
		DegreeProgram temp_degree = NA;

		int temp_day_to_complete[3];


		stringstream input_stream; //sets up a string stream and stores the single line from student data to that string stream in the next line
		input_stream << studentData[i];

		char delimit = ',';

		//creates a temporary student object to parse the string data. This was done as a pointer because it allows the the temp object to be assigned
		//to the array of pointers to student objects.
		Student* ptr_student;
		ptr_student = new Student;
		
		//Gets each item from the string stream as seperated by the delimiting character and then sets it using the setter for the student object
		getline(input_stream, temp_student_id, delimit);
		ptr_student->set_student_id(temp_student_id);
		
		getline(input_stream, temp_first_name, delimit);
		ptr_student->set_first_name(temp_first_name);

		getline(input_stream, temp_last_name, delimit);
		ptr_student->set_last_name(temp_last_name);

		getline(input_stream, temp_student_email, delimit);
		ptr_student->set_student_email(temp_student_email);

		getline(input_stream, age_string, delimit);
		temp_student_age = stoi(age_string); //changes the string retrieved from the table to an integer
		ptr_student->set_student_age(temp_student_age);


		//retieves the total days to complete the 3 classes. These are stored in seperate variables and zero indexed
		getline(input_stream, day0_string, delimit);
		temp_day0 = stoi(day0_string); //changes the string retrieved from the table to an integer
		temp_day_to_complete[0] = stoi(day0_string);

		getline(input_stream, day1_string, delimit);
		temp_day1 = stoi(day1_string); //changes the string retrieved from the table to an integer
		temp_day_to_complete[1] = stoi(day1_string);

		getline(input_stream, day2_string, delimit);
		temp_day2 = stoi(day2_string); //changes the string retrieved from the table to an integer
		temp_day_to_complete[2] = stoi(day2_string);

		//Sets the full days to complete using th fully populated array
		ptr_student->set_day_to_complete(temp_day_to_complete);

		
		//this retrieves the string related to the degree progrma
		getline(input_stream, degree_string, delimit);

		//depending on the result, the if-else statements assign the matching degree program to the enum value
		if (degree_string == "SECURITY")
			temp_degree = SECURITY;
		else if (degree_string == "NETWORK")
			temp_degree = NETWORK;
		else if (degree_string == "SOFTWARE")
			temp_degree = SOFTWARE;
		else
			temp_degree = NA;

		//sets the enum value for the degree program for the pointer student
		ptr_student->set_degree_program(temp_degree);


		//Sets the temporary student object to the appropriate position in the roster array
		classRosterArray[i] = ptr_student;			
	}
}


//Destructor to release memory
Roster::~Roster() { cout << "Roster destructor has run" << endl; }


//Printall loops through each item and calls the print function from the student method for it
void Roster::printAll() {
	
	for (int i = 0; i < table_size; i++) {
		
		//call the print function from the student method
		
		classRosterArray[i]->print();

	}

}



void Roster::remove(string remove_student_ID) {

	//sets up a boolean flag to determine if the ID has been found
	bool found_flag = false;

	for (int i = 0; i < table_size; i++) {
		if (classRosterArray[i]->get_student_id() == remove_student_ID) {
			found_flag = true; //found flag set to true

			table_size = table_size - 1; //reduces the table size as we are removing one element

			//This loop starts where the ID was found and shifts every item. This deletes the found item by shifting the one below it into place
			//This skips over deleting the lst item on the list. It will leave a duplicate in the array that is not printed because of the table_size change
			for (int j = i; j < table_size; j++) {
				classRosterArray[j] = classRosterArray[j + 1];
			}
		}
	}
		
	//If the boolean flag remains false after the For loop, report that the id was not found
	if (found_flag == false) { cout << "The ID was not found" << endl; }
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
	
	table_size++; //increments the size to ensure loops go through the appropriate amount of times
	int a = table_size-1; //uses this to add the new student object to the roster
	
	int days_array[3]; //temporary array to pass to the setter

	//sets up a new temporary student object
	Student* add_student;
	add_student = new Student;


	//Setter functions for the strings and age
	add_student->set_student_id(studentID);
	add_student->set_first_name(firstName);
	add_student->set_last_name(lastName);
	add_student->set_student_email(emailAddress);
	add_student->set_student_age(age);

	//populate the temporary array with the integers passed in
	days_array[0] = daysInCourse1;
	days_array[1] = daysInCourse2;
	days_array[2] = daysInCourse3;

	//sets the days to complete array by passing the temporary array to the setter
	add_student->set_day_to_complete(days_array);

	//sets the degree program based on the passed in value
	add_student->set_degree_program(degreeprogram);

	//set the new spot in the array to the values of the temporary student
	classRosterArray[a] = add_student;
}


void Roster::printInvalidEmails() {
	
	bool valid_email = true;
	bool valid_char = true;
	string email_search;
	size_t found; //this will point to the position in the string where the character was found or to the end of the string if it wasn't found
	
	for (int i = 0; i < table_size; i++) {

		//sets the base condition at the start of the For-loop - other wise everything after a false validity stays false
		valid_email = true;
		valid_char = true;
		
		
		//Putting the objects email into a string
		email_search = classRosterArray[i]->get_student_email();

				
		//searches the email string for @
		found = email_search.find("@");
		
		//if this is found after the length of the email string we know it is invalid
		if (found > email_search.length()) { valid_email = false; }
		
				
		//if the @ symbol is present this if statement will check if the next character is a valid alphanumeric
		if (found < email_search.length()) {
			found++; //increment found by one to check the character after the @ as it must be text
			valid_char = isalnum(email_search[found]);
		}
		
		if (valid_char == false) { valid_email = false; } //if a valid character isn't present then the email is invalid
		

		//searches the email string for .
		found = email_search.find(".");
		if (found > email_search.length()) { valid_email = false; }


		//searches for a blank space in the email string
		found = email_search.find(" ");
		if (found < email_search.length()) { valid_email = false; }


		//print the email if it is deemed invalid
		if (valid_email == false) {

			cout << "Invalid email: " << email_search << endl;

		}
		

	}



}


void Roster::printAverageDaysInCourse(string stud_ID) {
	
	for (int i = 0; i < table_size; i++) {
		
		if (classRosterArray[i]->get_student_id() == stud_ID) {
			int day0, day1, day2; //delcare integers to hold the data from the get function
			double avg;

			//assign the values from the student object to the local integer variable
			day0 = classRosterArray[i]->get_day_to_complete()[0];
			day1 = classRosterArray[i]->get_day_to_complete()[1];
			day2 = classRosterArray[i]->get_day_to_complete()[2];

			avg = (day0 + day1 + day2) / 3.0; //computes the average

			cout << "Average for " << stud_ID << " is: " << avg << endl;
		}

	}
}



void Roster::printByDegreeProgram(DegreeProgram degree_to_print) {
	
	cout << "Printing students in the " << degree_array[degree_to_print] <<" degree program." << endl;
	
	int student_count = 0;
	DegreeProgram local_degree;

	for (int i = 0; i < table_size; i++) {

		//sets a local variable in the function to the value of the degree program for the studen being checked
		local_degree = classRosterArray[i]->get_degree_program();

		
		//if the student matches then print out the info
		if (local_degree == degree_to_print) {
						
			classRosterArray[i]->print();
			student_count++;
		}



	}
	//Displays a message if no valid students are found
	if (student_count == 0) { cout << "No matching students found" << endl; }



}




