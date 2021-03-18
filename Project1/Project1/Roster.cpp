#include <iostream>
#include <sstream>
#include <vector>
#include <string>


//#include "Student.h"
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



//Constructor for the roster object
Roster::Roster() {

	
		
	//creates an array of pointers based on the size of the data table
	//Student* classRosterArray[table_size];


	//initializes a new student for each position in the array of pointers
	for (int i = 0; i < 5; i++) {
		classRosterArray[i] = new Student;

		//cout << classRosterArray[i] << " and " << &classRosterArray[i] << endl;
		
		string temp_student_id, temp_first_name, temp_last_name, temp_student_email, age_string, day0_string, day1_string, day2_string, degree_string;
		int temp_student_age, temp_day0, temp_day1, temp_day2;
		DegreeProgram temp_degree = NA;

		int temp_day_to_complete[3];


		stringstream input_stream; //sets up a string stream and stores the single line from student data to that string stream in the next line
		input_stream << studentData[i];

		char delimit = ',';

		Student* ptr_student;
		ptr_student = new Student;
		
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
		temp_day0 = stoi(day0_string);
		temp_day_to_complete[0] = stoi(day0_string);

		getline(input_stream, day1_string, delimit);
		temp_day1 = stoi(day1_string);
		temp_day_to_complete[1] = stoi(day1_string);

		getline(input_stream, day2_string, delimit);
		temp_day2 = stoi(day2_string);
		temp_day_to_complete[2] = stoi(day2_string);

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


		classRosterArray[i] = ptr_student;
		
				
	}


}


//Destructor to release memory
Roster::~Roster(){}


//Print all
void Roster::printAll() {

	for (int i = 0; i < 5; i++) {
		
		//call the print function from the book method
		classRosterArray[i]->print();

	}

}











void Roster::parse_string() {

	string degree_array[] = { "SECURITY", "SOFTWARE", "NETWORK", "NA" };
	
	for (int i = 0; i < sizeof(studentData) / sizeof(string); i++) {

		string temp_student_id, temp_first_name, temp_last_name, temp_student_email, age_string, day0_string, day1_string, day2_string, degree_string;
		int temp_student_age, temp_day0, temp_day1, temp_day2;
		DegreeProgram temp_degree = NA;

		int temp_day_to_complete[3];


		stringstream input_stream; //sets up a string stream and stores the single line from student data to that string stream in the next line
		input_stream << studentData[i];

		char delimit = ',';

				
					
		Student temp_student; //creates a temporary student
		
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

		
		
		//retieves the total days to complete the 3 classes. These are stored in seperate variables and zero indexed
		getline(input_stream, day0_string, delimit);
		temp_day0 = stoi(day0_string);
		temp_day_to_complete[0] = stoi(day0_string);

		getline(input_stream, day1_string, delimit);
		temp_day1 = stoi(day1_string);
		temp_day_to_complete[1] = stoi(day1_string);

		getline(input_stream, day2_string, delimit);
		temp_day2 = stoi(day2_string);
		temp_day_to_complete[2] = stoi(day2_string);

		temp_student.set_day_to_complete(temp_day_to_complete);
		


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

		//sets the enum value for the degree program for the temp student
		temp_student.set_degree_program(temp_degree);
		
			
		
				
		//cout << "The student id is: " << temp_student.get_student_id() << " and the rest is: " << flush;
		//cout << temp_student.get_first_name()<< ", " << temp_student.get_last_name()<< ", " << temp_student.get_student_email()<< ", " <<temp_student.get_student_age()<< ", " << endl;
		//cout << temp_student.get_day_to_complete()[0] << " , " << temp_student.get_day_to_complete()[1] << " , " << temp_student.get_day_to_complete()[2] << " , " <<  degree_array[temp_student.get_degree_program()] << " and that is it..." << endl;
		//cout << temp_day2 << " is this right?" << endl;

	}
}



