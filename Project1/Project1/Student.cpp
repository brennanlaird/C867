#include <iostream>

#include "Student.h"
#include "Degree.h"
#include "Roster.h"

using namespace std;

//Constructor for the student class
Student::Student() {
	
	//initialize string variables
	student_id = "";
	first_name = "";
	last_name = "";
	student_email = "";
	
	//initialize the array of integers for days to complete each course
	for (int i = 0; i < 3; i++) {
		day_to_complete[i] = i;
	}
	
	//initialize age vaiable to zero
	student_age = 0;

	//intitialize the degree program enum
	degree_program = NA;
}

//Destructor for the student class to release memory. The output is available to note when it has run
Student::~Student() {
	cout << "Student destructor has run" << endl;
}


//Setters - setting the value in the class
void Student::set_student_id(string new_student_id) { this->student_id = new_student_id; }
void Student::set_first_name(string new_first_name) { this->first_name = new_first_name; }
void Student::set_last_name(string new_last_name) { this->last_name = new_last_name; }
void Student::set_student_email(string new_student_email) { this->student_email = new_student_email; }
void Student::set_student_age(int new_student_age) { this->student_age = new_student_age; }
void Student::set_degree_program(DegreeProgram new_degree_program) { this->degree_program = new_degree_program; }

//The setter for the days to complete array uses a for loop to set each value
void Student::set_day_to_complete(int* new_day_to_complete){
	for (int k = 0; k < 3; k++) {
		this->day_to_complete[k] = new_day_to_complete[k];
	}
}

//Getters - retrieving the value of the variable from the class
string Student::get_student_id() { return this->student_id; }
string Student::get_first_name() { return this->first_name; }
string Student::get_last_name() { return this->last_name; }
string Student::get_student_email() { return this->student_email; }
int Student::get_student_age() { return this->student_age; }
DegreeProgram Student::get_degree_program() { return this->degree_program; }
int* Student::get_day_to_complete() { return this->day_to_complete; }



//Method for the student print function used to print specific student data
void Student::print() {
	
	//Prints out and formats the basic information
	cout << this->student_id << " \t" << flush;
	cout << "First Name:  " << this->first_name << " \t" << flush;
	cout << "Last Name:  " << this->last_name << " \t" << flush;
	cout << "Age:  " << this->student_age << " \t" << flush;
	

	//Uses the array for days to complete to print
	cout << "daysInCourse: {" << this->day_to_complete[0] << ", " << this->day_to_complete[1] << ", " << this->day_to_complete[2] << "} \t" << flush;
	
	//Sets a string to dereference the enum - Since this is used multiple places in might be better as a seperate function??
	string print_degree_array[] = { "SECURITY", "SOFTWARE", "NETWORK", "NA" };

	cout << "Degree Program:  " << print_degree_array[this->degree_program] << " \t" << endl;;

}



