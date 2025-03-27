/*
Student: Jason Luis 
02/18/2023 
Set up a code where you can calculate the days, hours, minutes, and seconds that are entered by the user. 
*/

#include <iostream>
using namespace std; 

int main() {

// Variable inputs 

	int seconds, minutes, hours{}, days, months{}, years{}, allhours, allminutes, allseconds;

	// Let the user input the days 

	cout << "Enter how many days: ";

// Calulate the hours, minutes, seconds in a day period. 

	months = years * 12;

	days = months * 30;

	days = hours / 24; 

	hours = days * 24;

	minutes = hours * 60; 

	seconds = hours * 3600; 

	

// Display the days 

	cin >> days;

	cout << "======================================== In " << days << " day(s).========================================" << endl;
	
	
	hours = days * 24;
	cout << "There are " << hours << " hours." << endl; 

	minutes = hours * 60;
	cout << "\nThere are " << minutes << " minutes." << endl; 

	seconds = hours * 3600;
	cout << "\nThere are " << seconds << " seconds." << endl; 

	cout << "==============================================================================================" << endl;

// Calculate and display the days, hours, minutes, and seconds in a month period.

	cout << "\nEnter how many months: ";

	cin >> months;

	cout << "======================================== In " << months << " month(s).========================================" << endl;

	days = months * 30; 
	cout << "\nThere are " << days << " days." << endl;

	hours = days * 24;
	cout << "\nThere are " << hours << " hours." << endl;

	minutes = hours * 60;
	cout << "\nThere are " << minutes << " minutes." << endl;

	seconds = hours * 3600;
	cout << "\nThere are " << seconds << " seconds." << endl;

	cout << "==============================================================================================" << endl; 

// Calculate and Display the months, days, hours, minutes, and seconds in a year period. 

	cout << "\nEnter how many years: ";

	cin >> years;

	cout << "======================================== In " << years << " year(s).========================================" << endl;

	months = years * 12; 

	cout << "\nThere are " << months << " months." << endl; 

	days = months * 30;
	cout << "\nThere are " << days << " days." << endl;

	hours = days * 24;
	cout << "\nThere are " << hours << " hours." << endl;

	minutes = hours * 60;
	cout << "\nThere are " << minutes << " minutes." << endl;

	seconds = hours * 3600;
	cout << "\nThere are " << seconds << " seconds." << endl; 

	cout << "==============================================================================================" << endl;

	// calculate and display all together  
	
	cout << "\nIn " << years << " year(s), " << months << " month(s), and " << days << " day(s),\n";

	months = years * 12;

	days = months * 30;

	hours = days * 24;

	minutes = hours * 60;

	seconds = hours * 3600;

	allhours = (days * 24) + (months * 30 + days) + (years * 12 + months); 

	cout << "\nThere are " << allhours << " hours." << endl;

	allminutes = allhours * 60;

	cout << "\nThere are " << allminutes << " minutes." << endl; 

	allseconds = allminutes * 60;

	cout << "\nThere are " << allseconds << " seconds." << endl;

}