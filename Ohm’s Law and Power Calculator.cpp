
#include <cmath> // helps to use math formula
#include <iostream> // Allows program to output data to the screen
using namespace std; // include namespace to avoid having to write std::

int main() // function main begins program execution
{
    int selectSect, selectEqu; // Declare the selected section, selected equation.
    double volt, resistor, current, power; // Declare the volt, resistor, current, power.
    
    cout << "---------------------------------------------------------------------------------------------------" << endl;
    cout << "-----------  This program helps to calculate for volts, powers, currents, resistors ---------------" << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    /* power = 1, voltage =2, current = 3, resistor = 4.*/
    cout << "Select the one section between section 1~4" << endl; // Prompt the user select the sections
    cin >> selectSect; // User enter the one of sections.
    cout << "Select the one equation between 1~3" << endl; // Prompt the select one of eqauations.
    cin >> selectEqu; // User enter the one of equations.


    while (selectSect != 0) // If the user enters 0, it exit the while loop.
    {
        if (selectSect != 0) // If the user enters non 0 value for select section, execute this block
        {
        switch (selectSect) // Execute different blocks of code based on the selected section.
        {
            case 1: // User selected the power section (1), execute the power section block
            {
                switch(selectEqu) // Execute different blocks of code based on the selected eqaution. (Power)
                {
                    case 1: // Execute the first equation of power (VxI)
                        cout << "What is the value of volt?" << endl; // Prompt the value of volt
                        cin >> volt; // User enters the value of volt
                        cout << "What is the value of current?" << endl; // Prompt the value of current
                        cin >> current; // User enters the value of current.

                        cout << "You selected the VxI eqaution the value is " << volt * current << " watts" << endl; // print out the selected equation VxI with unit.
                        break; // Break out of the switch block
                    case 2: // Execute the second equation of power (RxI^2)
                        cout << "What is the value of resistor?" << endl; // Prompt the value of resistor
                        cin >> resistor; // User enters the value of resistor
                        cout << "What is the value of current?" << endl; // Prompt the value of current
                        cin >> current; // User enters the value of current.

                        cout << "You selected the RxI^2 eqaution the value is " << resistor * current * current << " watts" << endl; // print out the selected eqaution RxI^2 with unit.
                        break; // Break out of the switch block
                    case 3: // Execute the third equation of pwoer (V^2/R)
                        cout << "What is the value of volt?" << endl; // Prompt the value of volt
                        cin >> volt; // User enters the value of volt
                        cout << "What is the value of resistor?" << endl; // Prompt the value of resistor
                        cin >> resistor; // User enters the value of resistor

                        cout << "You selected the V^2/R eqaution the value is " << volt * volt / resistor << " watts" << endl; // print out the selected eqaution V^2/R with unit.
                        break; // Break out of the switch block
                }
                break; // Break out of the switch block
            }
            case 2: // User selected the voltage section (2), execute the voltage section block.
            {
                switch(selectEqu) // Execute different blocks of code based on the selected eqaution. (voltage)
                {
                    case 1: // Execute the first equation of voltage (RxI)
                        cout << "What is the value of resistor?" << endl; // Prompt the value of resistor
                        cin >> resistor; // User enters the value of resistor
                        cout << "What is the value of current?" << endl; // Prompt the value of current
                        cin >> current; // User enters the value of current.

                        cout << "You selected the RxI eqaution the value is " << resistor * current << " volts" << endl; // print out the selected equation RxI with unit.
                        break; // Break out of the switch block
                    case 2: // Execute the second equation of voltage (P/I)
                        cout << "What is the value of power?" << endl; // Prompt the value of power
                        cin >> power; // User enters the value of power
                        cout << "What is the value of current?" << endl; // Prompt the value of current
                        cin >> current; // User enters the value of current.

                        cout << "You selected the P/I eqaution the value is " << power/current << " volts" << endl; // print out the selected equation P/I with unit.
                        break; // Break out of the switch block
                    case 3: // Execute the third equation of voltage (square root of PxR)
                        cout << "What is the value of power?" << endl; // Prompt the value of power
                        cin >> power; // User enters the value of power
                        cout << "What is the value of resistor?" << endl; // Prompt the value of resistor
                        cin >> resistor; // User enters the value of resistor

                        cout << "You selected the square root of PxR  eqaution the value is " << sqrt(power * resistor) << " volts" << endl; // print out the selected equation PxR with unit.
                        break; // Break out of the switch block
                }
                break;
            }
            case 3: // User selected the resistor section (3), execute the resistor section block.
            {
                switch(selectEqu) // Execute different blocks of code based on the selected eqaution. (resistor)
                {
                    case 1: // Execute the first equation of voltage (V/I)
                        cout << "What is the value of volt?" << endl; // Prompt the value of volt
                        cin >> volt; // User enters the value of volt
                        cout << "What is the value of current?" << endl; // Prompt the value of current
                        cin >> current; // User enters the value of current.

                        cout << "You selected the V/I eqaution the value is " << volt/current << " ohms" << endl; // print out the selected equation V/I with unit.
                        break; // Break out of the switch block
                    case 2: // Execute the second equation of voltage (V^2/P)
                        cout << "What is the value of volt?" << endl; // Prompt the value of volt
                        cin >> volt; // User enters the value of volt
                        cout << "What is the value of power?" << endl; // Prompt the value of power
                        cin >> power; // User enters the value of power

                        cout << "You selected the V^2/P eqaution the value is " << volt * volt / power << " ohms" << endl; // print out the selected equation V^2/P with unit.
                        break; // Break out of the switch block
                    case 3: // Execute the third equation of voltage (P/I^2)
                        cout << "What is the value of power?" << endl; // Prompt the value of power
                        cin >> power; // User enters the value of power
                        cout << "What is the value of current?" << endl; // Prompt the value of current
                        cin >> current; // User enters the value of current.

                        cout << "You selected the P/I^2 eqaution the value is " << power/current * current << " ohms" << endl; // print out the selected equation P/I^2 with unit.
                        break; // Break out of the switch block
                }
                break; // Break out of the switch block
            }
            
            case 4: // User selected the current section (4), execute the current section block.
            {
                switch(selectEqu) // Execute different blocks of code based on the selected eqaution. (current)
                {
                    case 1: // Execute the first equation of voltage (V/R)
                        cout << "What is the value of volt?" << endl; // Prompt the value of volt
                        cin >> volt; // User enters the value of volt
                        cout << "What is the value of resistor?" << endl; // Prompt the value of resistor
                        cin >> resistor; // User enters the value of resistor

                        cout << "You selected the V/R eqaution the value is " << volt / resistor << " amps" << endl; // print out the selected equation V/R with unit.
                        break; // Break out of the switch block
                    case 2: // Execute the second equation of voltage (P/V)
                        cout << "What is the value of power?" << endl; // Prompt the value of power
                        cin >> power; // User enters the value of power
                        cout << "What is the value of volt?" << endl; // Prompt the value of volt
                        cin >> volt; // User enters the value of volt

                        cout << "You selected the P/V eqaution the value is " << power / volt << " amps" << endl; // print out the selected equation P/V with unit.
                        break; // Break out of the switch block
                    case 3: // Execute the third equation of voltage (square root of P/R)
                        cout << "What is the value of power?" << endl; // Prompt the value of power
                        cin >> power; // User enters the value of power
                        cout << "What is the value of resistor?" << endl; // Prompt the value of resistor
                        cin >> resistor; // User enters the value of resistor

                        cout << "You selected the square root of P/R eqaution the value is " << sqrt(power /resistor) << " amps" << endl; // print out the selected equation square root of P/R with unit.
                        break; // Break out of the switch block
                }
                break; // Break out of the switch block
            }
           
            default: // specifies the code to run in the situation of a no case match.
            {
                cout << "This is not valid section."; // print out the value of section is not between 1~4 = invalid
                break; // Break out of the switch block
            }
            break; // Break out of the switch block
            }   

            // power = 1, voltage =2, current = 3, resistor = 4.
            cout << "Select the one section between section 1~4" << endl; // Prompt the user select the sections
            cin >> selectSect; // User enter the one of sections.
            cout << "Select the one equation between 1~3" << endl; // Prompt the select one of eqauations.
            cin >> selectEqu; // User enter the one of equations.
        }
    }
    return 0; // successfully completion.
}

