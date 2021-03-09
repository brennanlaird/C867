#include <iostream>

#include "Student.h"

using namespace std;

//Constructor for the student class
Student::Student() {
	cout << "student constructed" << endl;

}

//Destructor for the student class to release memory
Student::~Student() {

}


//Setters - setting the value in the class
void Student::set_student_id(){}
void Student::set_first_name(){}
void Student::set_last_name(){}
void Student::set_student_email(){}
void Student::set_student_age(){}
void Student::set_degree_program(){}
void Student::set_day_to_complete(){}

//Getters - retrieving the value of the variable from the class
string Student::get_student_id() { return student_id; }
string Student::get_first_name() { return first_name; }
string Student::get_last_name() { return last_name; }
string Student::get_student_email() { return student_email; }
int Student::get_student_age() { return student_age; }
DegreeProgram Student::get_degree_program() { return degree_program; }
//int Student::get_day_to_complete() { return day_to_complete; }





//A test method to ensure the student class is calling this
void Student::student_test() {

	cout << "Did this pass the test?" << endl;

}