#include <iostream>
#include <sstream>
#include <vector>
#include <string>


#include "Student.h"
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

//Constructor for the roster object
Roster::Roster() {

	cout << "Roster constructor has run" << endl;
	//cout << sizeof(studentData)/sizeof(string) << endl;

}


//Destructor to release memory
Roster::~Roster(){}


void Roster::parse_string() {

	
	
	for (int i = 0; i < sizeof(studentData) / sizeof(string); i++) {

		//cout << studentData[i] << endl;

		string student = "student";
		string temp_string;
		string temp_student_id, temp_first_name, temp_last_name, temp_student_email, age_string, day0_string, day1_string, day2_string, degree_string;
		int temp_student_age, temp_day0, temp_day1, temp_day2;
		DegreeProgram temp_degree;

		stringstream input_stream; //sets up a string stream and stores the single line from student data to that string stream in the next line
		input_stream << studentData[i];

		char delimit = ',';

			
		
		student = student + to_string(i+1); //sets the student string to a unique name based on the loop iteration
		

				
		Student temp_student;
		
		getline(input_stream, temp_student_id, delimit);
		temp_student.set_student_id(temp_student_id);
		
		getline(input_stream, temp_first_name, delimit); 
		temp_student.set_first_name(temp_first_name);

		getline(input_stream, temp_last_name, delimit);
		temp_student.set_last_name(temp_last_name);

		getline(input_stream, temp_student_email, delimit);
		temp_student.set_student_email(temp_student_email);

		getline(input_stream, age_string, delimit);
		temp_student_age = stoi(age_string); //changes the string retrieved from the table to an integer
		temp_student.set_student_age(temp_student_age);

		
		
		getline(input_stream, day0_string, delimit);
		temp_day0 = stoi(day0_string);

		getline(input_stream, day1_string, delimit);
		temp_day1 = stoi(day1_string);

		getline(input_stream, day2_string, delimit);
		temp_day2 = stoi(day2_string);

		
		
		//this retrieves the string related to the degree progrma
		getline(input_stream, degree_string, delimit);
		
		
		//depending on the result the if-else statements assign the matching degree program to the enum value
		if (degree_string == "SECURITY")
			temp_degree = SECURITY;
		else if (degree_string == "NETWORK")
			temp_degree = NETWORK;
		else if (degree_string == "SOFTWARE")
			temp_degree = SOFTWARE;

		//sets the enum value for the degree program for the temp student
		temp_student.set_degree_program(temp_degree);
		
			
		cout << "The student id is: " << temp_student.get_student_id() << " and the rest is: " << flush;
		cout << temp_student.get_first_name()<< ", " << temp_student.get_last_name()<< ", " << temp_student.get_student_email()<< ", " <<temp_student.get_student_age()<< ", " << endl;
		//cout << student << " the label for the student id by the loop" << endl;

		
				//cout << student1.get_first_name() << " is the first name of student1" << endl;
		
		//cout << studentData[i] << endl; 
	}
}



void Roster::rostertest(){
	//cout << "this was the roster test" << endl;

}