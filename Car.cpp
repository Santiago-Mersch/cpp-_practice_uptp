//Create a data structure named Car that contains two public fields: an int field for model year
//and a double field for miles per gallon. Write a program that declares a Car. Assign values to
//the car’s two data fields, and display the values with explanation. Save the file as Car.cpp.

#include <iostream>

using namespace std;

struct Car {
	int model_year = 0;
	double miles_per_gallon = 0.0;
	
};



int main (){
	Car toyota;
	toyota.model_year = 2019;
	toyota.miles_per_gallon = 33.1;
	
	cout<<"The model of de toyota is :"<<toyota.model_year<<endl;
	cout<<"The miles per gallon is :"<<toyota.miles_per_gallon;
	
	
}

