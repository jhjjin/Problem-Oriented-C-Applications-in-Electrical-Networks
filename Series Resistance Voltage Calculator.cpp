#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159
 
// Prototype
void greeting();                                                                         // Returns greeting message  
double voltage_supply(double time);                                                      // Returns voltage supply (Vs(t) [V]) at the specified time [seconds]
double current(double voltage, double resistance);                                       // Returns currnet (i [A]) in amps given voltage [V] and resistance [ohms] 
void calc_voltages(double resistor[], int array_size, double current, double voltage[]); // Calculates resistor voltages and sotres them in voltage[] array
 
int main() // Function main begins program execution.
{
   
    greeting(); // Print out the greeting message
    cout << "           -------------------------          " << endl; // Print out the text-based dipiction of circuit in Fig.1 Line 20~48
    cout << "           |                    R0 |          " << endl;
    cout << "           |                       |          " << endl;
    cout << "           |                       |          " << endl;
    cout << "           |                       |          " << endl;
    cout << "           |                       |          " << endl;
    cout << "           |                       >          " << endl;
    cout << "           |                       <          " << endl;
    cout << "           |                       >  VR0     " << endl;
    cout << "        ==========                 <          " << endl;
    cout << "      ==  /\\    /==               >          " << endl;
    cout << "     === /  \\  / ===              <          " << endl;
    cout << "      ==     \\/  ==               |          " << endl;
    cout << "        ==========              R1 |          " << endl;
    cout << "           |                       >          " << endl;
    cout << "           |                       < VR1      " << endl;
    cout << "           |                       >          " << endl;
    cout << "           |                       <          " << endl;
    cout << "           |                       >          " << endl;
    cout << "           |                       <          " << endl;
    cout << "           |                      ...         " << endl;
    cout << "           |                       |          " << endl;
    cout << "           |                    R7 >          " << endl;
    cout << "           |                       < VR7      " << endl;
    cout << "           |                       >          " << endl;
    cout << "           |                       <          " << endl;
    cout << "           |                       |          " << endl;
    cout << "           -------------------------          " << endl;
    cout << "          Fig. 1: Circuit under test          " << endl;
 
  
 
 
 
   
    const int array_size = 8;                                             // Define of the array size
    double resistors [array_size] = {22, 10, 33, 4.7, 3.3, 47, 56, 2.2};  // Initialize resistors array with array_size
    double total = 0.0;                                                   // define the total to 0.0
    for (int i = 0; i < array_size; i++)                                  // Using for loop untill array_size, and increase the i += 1
    {
       total += resistors[i];                                             //Assigned the value of resistors added and stored to total
    }
 
    cout << "t [s]\t Vs [V]\ti [A]\t";                                    // Print out t [s], Vs [V], i [A] with seperate one space
    for (int i = 0; i < array_size; i++)                                  // Using for loop untill array_size, and increase the i += 1
    {
        cout << "VR" << i << " [V]\t";                                    // Print out the VRi [V]. (VR1 [V], VR2 [V]..)
    }
    cout << endl; // Insert new line
 

   
   for (double t = 0.0; t <= 0.0010; t += 0.0001)                         // Using for loop untill 0.0010 seconds, and increase the i += 0.0001 seconds
    {
        double voltage[array_size];                                       // Declare an voltage with size of array_size
        calc_voltages(resistors, array_size, current(voltage_supply(t), total), voltage);
 
        cout << fixed << setprecision(4);
        cout << t << "\t" << voltage_supply(t) << "\t" << current(voltage_supply(t), total) << "\t";
 
        for (int i = 0; i < array_size; i++)
        {
            cout << voltage[i] << "\t";
        }
        cout << endl;
    }
    return 0;
}
       
// Definition
void greeting()
{
    cout << "The program that uses arrays and functions to analyze the series resistance circuit shouwn in Fig. 1 " << endl;
    cout << "Calculating the voltages across each resistor in the time span from 0 to 0.0010 seconds in 0.0001 second steps" << endl;
}
double voltage_supply(double time)                                                      // Returns Vs(t) [V] at the specified time [seconds]
{
    return (5.0 * (cos((2 * PI * pow(10, 3)) * time)));
}
double current(double voltage, double resistance)                                       // Returns current in amps given voltage [V] and resistance [ohms]
{
       
    return  voltage / resistance;
}
void calc_voltages(double resistor[], int array_size, double current, double voltage[]) // calculates resistor voltages and stores them in voltage[] array
{
 
   
    for(int i = 0; i < array_size; i++)
    {
        voltage[i] = current * resistor[i];
    }
}
