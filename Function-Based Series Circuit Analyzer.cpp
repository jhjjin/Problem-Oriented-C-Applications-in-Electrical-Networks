#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double supply_voltage(double);
double current(double, double, double);
double voltage_r1(double, double, double);
double voltage_r2(double, double, double);

int main()
{
	double r1;
	double r2;
	cout << "THIS PROGRAM WILL USE FUNCTIONS AND IT WILL BE ABLE TO ANALYZE THE CIRCUIT BELOW\n\n" << endl;
	cout << "FIGURE 1 - CIRCUIT UNDER TEST\t\t\t\t" << "FORMULAS TO BE USE FOR TABLE CALCULATION" << endl;
	cout << "             i(t)       v1(t)" << endl;
	cout << "             -----------^^^^-----------\t\t\t" << "Vs = 5cos (2PI * pow (10, 3) * t)" << endl;
	cout << "            |           R1             |" << endl;
	cout << "            |                          |" << endl;
	cout << "          =   =                        |" << endl;
	cout << "        =       =                      >\t\t" << "Through KLC, KVL: i(t) = Vs(t) / (R1 + R2)\n" << endl;
	cout << " vs(t) =  ~~~~~  =                  R2 <  v2(t)" << endl;
	cout << "        =       =                      >" << endl;
	cout << "          =   =                        |" << endl;
	cout << "            |                          |\t\t" << "v1(t) = i(t) * R1      v2(t) = i(t) * R2\n" << endl;
	cout << "            |                          |" << endl;
	cout << "             -------------------------- \n\n" << endl;
	cout << "Please, Enter a Numerical Value for r1. " << endl;
	cin >> r1;
	cout << "Please, Enter a Numerical Value for R2. " << endl;
	cin >> r2;
	//print the table titles 
	cout << "time (s)" << "\t";
	cout << "Vs(t) [s]" << "\t";
	cout << "i(t) [A]" << "\t";
	cout << "v1(t) [v]" << "\t";
	cout << "v2(t) [v]" << "\t";

	for (double t = 0.0000; t <= 0.0010; t++)
	{
		cout << t << "\t"; 
		cout << supply_voltage(t) << "\t"; 
		cout << current(t, r1, r2) << "\t"; 
		cout << voltage_r1(t, r1, r2) << "\t"; 
		cout << voltage_r2(t, r1, r2) << "\t";
	}

	return 0;
}
void greeting() {

	cout << "WELCOME TO MY PROGRAM THAT USES FUNCTIONS\n AND IS BALE TO ANALYZE THE BELOW CIRCUIT!" << endl;
}
double supply_voltage(double time) {

	double pi = 3.14159;

	return 5 * cos((2 * pi * pow(10, 3)) * time);
}
double current(double time, double r1, double r2) {
	
	return 0;
} 
double voltage_r1(double time, double r1, double r2) {

	return 0;
}
double voltage_r2(double time, double r1, double r2) {

	return 0;
}
