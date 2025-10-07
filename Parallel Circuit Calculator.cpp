/* Pseudocode 
   1. print out the text-based depcition of Fig 1 (use "cout")
   2. Prompt the user to enter the real resistor 1,2,3
   3. User inputs the real resistor 1,2,3
   4. Prompt the unit of resistor values 
   5. User inputs the unit of resistors (ohms)
   6. Prompt the user to enter the real capacity 1,2,3
   7. User inputs the real capacity 1,2,3
   8. Prompt the unit of capacity value 
   9. User inputs the unit of capacitor values (microfarads)
   10. Print out Equivalent resistance, capacitance and Average resistor value, capcitor value.
*/
#include <iostream>  //allows program to output data to the screen
using namespace std;  // include namespace, to avoid having to write std::
 
int main() // function main begins program execution
{

      cout << "        ------^v^v^v-------        " << endl;
      cout << "        |       R1        |        " << endl;
      cout << "A       |                 |       B" << endl;
      cout << "--------------^v^v^v---------------" << endl;
      cout << "        |       R2        |        " << endl;
      cout << "        |                 |        " << endl;
      cout << "        ------^v^v^v-------        " << endl;
      cout << "                R3                 " << endl;
     
      cout << "               C1                " << endl;
      cout << "         ------|(-------         " << endl;
      cout << "         |             |         " << endl;
      cout << "X        |     C2      |       Y " << endl;
      cout << "---------------|(----------------" << endl;
      cout << "         |             |         " << endl;
      cout << "         |     C3      |         " << endl;
      cout << "         ------|(-------         " << endl;
      
      double resistor1, resistor2, resistor3; // Declare the resistor's type
      double capacitor1, capacitor2, capacitor3; // Declare the capacitor's type
      double equivRes, equivCap, averRes, averCap; // Declare the Euquivalent Resistance, Capacitor, Average Resistor, Capacitor.
      string unitRes, unitCap; // Declare unit of Resistor, Capacitor.
      cout << "What is the value of resistor 1,2,3?" << endl; // Prompt the user to enter the real resistor 1,2,3
      cin >> resistor1 >> resistor2 >> resistor3; // User inputs the real resistor 1,2,3
      cout << "What is the unit of resistors?" << endl; // Prompt the unit of resistor values (ohms)
      cin >> unitRes; // User inputs the unit of resistor (ohms)
     
      cout << "What is the value of capacitor 1,2,3?" << endl; // Prompt the user to enter the real capacity 1,2,3
      cin >> capacitor1 >> capacitor2 >> capacitor3; // User inputs the real capacity 1,2,3
      cout << "What is the unit of capacitors?" << endl; // prompt the unit of capacity value
      cin >> unitCap; // User inputs the unit of capacitor values (microfarads)
     
      equivRes = 1 / ((1 / resistor1) + (1 / resistor2) + (1 / resistor3)); // equivRes is assigned the formula for resistor in parallel
      equivCap = capacitor1 + capacitor2 + capacitor3; // equivCap is assigned the formula for capacitor in parallel.
      averRes = (resistor1 + resistor2 + resistor3) / 3; // averRes is assigned dividing the sume of all resistor by total number of resistors.
      averCap = (capacitor1 + capacitor2 + capacitor3) / 3; // averCap is assigned dividing the sume of all capacitors by total number of capacitors.
      cout << "The equivalent resistance in parallel P_AB is " << equivRes << " " << unitRes << endl; // print out the equivRes with unit.
      cout << "The equivalent capacitor in series C_XY is " << equivCap << " " << unitCap << endl; // print out the equivCap with unit.
      cout << "The average resistor value " << averRes << " " << unitRes << endl; // print out the averRes with unit.
      cout << "The average capacitor value " << averCap << " " << unitCap << endl; // print out the averCap with unit.
 
      
 
      return 0;
 
}
