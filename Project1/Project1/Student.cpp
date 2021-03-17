#include <iostream>

#include "Student.h"
#include "Degree.h"
#include "Roster.h"

using namespace std;

//Constructor for the student class
Student::Student() {
	
	
	cout << "A student has been constructed" << endl;
	
	
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

//Destructor for the student class to release memory
Student::~Student() {

}


//Setters - setting the value in the class
void Student::set_student_id(string new_student_id) { student_id = new_student_id; }
void Student::set_first_name(string new_first_name) { first_name = new_first_name; }
void Student::set_last_name(string new_last_name) { last_name = new_last_name; }
void Student::set_student_email(string new_student_email) { student_email = new_student_email; }
void Student::set_student_age(int new_student_age) { student_age = new_student_age; }
void Student::set_degree_program(DegreeProgram new_degree_program) { degree_program = new_degree_program; }

void Student::set_day_to_complete(int* new_day_to_complete){
	for (int k = 0; k < 3; k++) {
		day_to_complete[k] = new_day_to_complete[k];

	}

}

//Getters - retrieving the value of the variable from the class
string Student::get_student_id() { return student_id; }
string Student::get_first_name() { return first_name; }
string Student::get_last_name() { return last_name; }
string Student::get_student_email() { return student_email; }
int Student::get_student_age() { return student_age; }
DegreeProgram Student::get_degree_program() { return degree_program; }
int* Student::get_day_to_complete() { return day_to_complete; }


//Method for the student print function used to print specific student data
void Student::print() {
	//nothing here yet

	
	cout << "Tab char\t" << "acter" << endl;
}



