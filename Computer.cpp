//Create a data structure named Computer. Decide on at least three fields that you want to
//include within your Computer structure. Each of the fields must be an int or a double.
//Write a program that declares two Computers. Prompt the user for values for the fields
//for each Computer, and echo them. Save the file as Computer.cpp.

#include <iostream>

using namespace std;

struct Computer {
	int ram = 0;
	int ssd = 0;
	string processor = "";
	
};


int main(){
	Computer asus;
	Computer msi;
	
	cout<<"Enter the value of the ram for the asus pc : ";
	cin>>asus.ram;
	cout<<"Enter the value of the ssd for the asus pc : ";
	cin>>asus.ssd;
	cout<<"Enter the processor :";
	cin>>asus.processor;
	
	cout<<"Enter the value of the ram for the msi pc : ";
	cin>>msi.ram;
	cout<<"Enter the value of the ssd for the msi pc : ";
	cin>>msi.ssd;
	cout<<"Enter the processor :";
	cin>>msi.processor;
	

	cout<<"The asus pc have :"<<endl;
	cout<<"Ram:"<<asus.ram<<endl;
	cout<<"Ssd:"<<asus.ssd<<endl;
	cout<<"Processor :"<< asus.processor<<endl;
	
	cout<<"The msi pc have :"<<endl;
	cout<<"Ram:"<<msi.ram<<endl;
	cout<<"Ssd:"<<msi.ssd<<endl;
	cout<<"Processor :"<< msi.processor<<endl;
	
}

