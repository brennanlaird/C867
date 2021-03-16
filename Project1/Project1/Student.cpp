#include <iostream>

#include "Student.h"
#include "Degree.h"
#include "Roster.h"

using namespace std;

//Constructor for the student class
Student::Student() {
	
	
	cout << "A student has been constructed" << endl;
	
	
	
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
void Student::set_degree_program(DegreeProgram new_degree_program){}
void Student::set_day_to_complete(){}

//Getters - retrieving the value of the variable from the class
string Student::get_student_id() { return student_id; }
string Student::get_first_name() { return first_name; }
string Student::get_last_name() { return last_name; }
string Student::get_student_email() { return student_email; }
int Student::get_student_age() { return student_age; }
DegreeProgram Student::get_degree_program() { return degree_program; }
//int Student::get_day_to_complete() { return day_to_complete[3]; }


//Method for the student print function used to print specific student data
void Student::stud_print() {
	//nothing here yet
}



//A test method to ensure the student class is calling this
void Student::student_test() {

	cout << "Did this pass the test?" << endl;

}