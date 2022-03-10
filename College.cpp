//Create a data structure named College that contains three public fields: the year the
//
//college was founded, the current student population, and the annual tuition. Write a pro-
//gram that declares a College. Prompt the user for values for the fields, and echo them.
//
//Save the file as College.cpp.

#include <iostream>

using namespace std;

struct College {
	int year_founded = 0;
	int student_population = 0;
	double annual_tuition = 0;
	
};


int main (){
	College uptp;
	cout<<"Introduce the year the college was founded :";
	cin>>uptp.year_founded;
	cout<<"Introduce the student population :";
	cin>>uptp.student_population;
	cout<<"Introduce the annual tuition :";
	cin>>uptp.annual_tuition;
	
	cout<<"The year the college was founded is : "<< uptp.year_founded<<endl;
	cout<<"The student population is : "<< uptp.student_population<<endl;
	cout<<"The annual tuition is : "<< uptp.annual_tuition<<endl;
}

