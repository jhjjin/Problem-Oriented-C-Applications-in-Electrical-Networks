/* Pseudocode
   1. Print out the description text-based depictions of circuits in Fig 1 and Fig 2
   2. Declare the all possible varialbes which must accpet real numbers (voltage, current, resistors, power, selected circut number)
   3. Prompt the User select the circuit to analyze between Fig 1 and Fig 2
   4. User enter to select the circuits between Fig 1 and Fig 2 ( enter 1 = Fig 1, 2 = Fig 2)
   5. Prompt the values of the voltage V1, resistor R1,R2
   6. User enter the values of   the voltage V1, rsistor R1,R2
   7. Prompt the units of voltage, resistors.
   8.  User enter the units of voltage, resistors.
   9. Using while loop to repeat the program and return to the circuit selection prompt
      (Once User enter 0, it exit from the while loop)
   10. Print out result of Fig 1 which is current I = V1/(R1+R2) , Voltages is V_R1 = IxR1, V_R2 = IxR2,
      Powers P_R1 = V_R1xI, P_R2 = V_R2xI, Total Power P_Total= P_R1 + P_R2.
   11. print out result of Fig 2 which is current I_R1 = V1/R1, I_R2 = V1/R2, Powers P_R1 = V1xI_R1,P_R2 = V1xI_R2,
      Total Power = P_Total = P_R1 + P_R2
   The unit of variables ohms ampere
*/
 
 
#include <iostream>
using namespace std;
 
int main()
{    
      cout << "                R1                     " << endl;
      cout << "      -------^v^v^v------          " << endl;
      cout << "      |                 |           " << endl;
      cout << "      |                 |           " << endl;
      cout << " V1 + |                 >             " << endl;
      cout << "     ---                <               " << endl;
      cout << "      -                 >         " << endl;
      cout << "      |                 <          " << endl;
      cout << "      |                 > R2     " << endl;
      cout << "      |                 <          " << endl;
      cout << "      |                 |           " << endl;
      cout << "      |                 |           " << endl;
      cout << "      ---------o---------             " << endl;
      cout << "               |                         " << endl;
      cout << "              ----                      " << endl;
      cout << "              \\  /               " << endl;
      cout << "               \\/                " << endl;
      cout << "  Fig. 1 - Resitors in series\n   " << endl;
 
     
      cout << "      -------------------o-------------------             " << endl;
      cout << "      |                  |                  |              " << endl;
      cout << "      |                  |                  |              " << endl;
      cout << "      |                  |                  |              " << endl;
      cout << " V1 + |                  >  "  "                >                  " << endl;
      cout << "     ---                 <  "  "                <             " << endl;
      cout << "      -                  >  "  "                >             " << endl;
      cout << "      |                  <  "  "                <             " << endl;
      cout << "      |                  >      R1         > R2            " << endl;
      cout << "      |                  <      "    "         <             " << endl;
      cout << "      |                  |  "    "               |              " << endl;
      cout << "      |                  |  "    "               |              " << endl;
      cout << "      |                  |  "    "               |              " << endl;
      cout << "      -------------------o-------------------             " << endl;
      cout << "                         |                                           " << endl;
      cout << "                        ---                                         " << endl;
      cout << "                        \\  /                                     " << endl;
      cout << "                         \\/                                      " << endl;
      cout << "           Fig. 2 - Resitors in Parallel.              " << endl;
 
      double v1, r1, r2; // Declare voltage 1 (v1) ,current I_R1,I_R2(=i_r1, i_r2), resistor R1,R2(=r1,r2), Power P_R1,P_R2,P_total (p_r1,p_r2,p_total)
      int selectCircuit; //Declare the number of selected circuit
      //string unitVolt, unitRes, unitCur, unitPow; // Declare the unit Of voltages and resistor, current, power
 
      cout << "Select the circut between 1(Fig. 1) and 2(Fig. 2)" << endl; // Prompt select the circuit
      cin >> selectCircuit; // User enter to select circuit between 1 and 2.
 
      while (selectCircuit != 0) // If user enter 0, it exit the while loop.
      {
           
            cout << "What is the value of the voltage V1?" << endl; // Prompt the value of voltage V1
            cin >> v1; // User enter the value of voltage V1
            cout << "What is the value of the resistor R1?" << endl; //Prompt the value of resistor R1
            cin >> r1; // User enter the value of resistor R1
            cout << "What is the value of the resistor R2?" << endl; // Prompt the value of resisotr R2
            cin >> r2; // User enter the value of resistor R2
     
            if (selectCircuit == 1) // User selected the circuit of Fig 1
            {
                  double i = v1 / (r1 + r2); // assigned the formula of I in series at Fig 1
                  double v_r1 = i * r1; // assigned the formula of V_R1 in series at Fig 1
                  double v_r2 = i * r2; // assignd the formula  of V_R2 in series at Fig 1
                  double p_r1 = v_r1 * i; // assigned the formula of P_R1 in series at Fig 1
                  double p_r2 = v_r2 * i; // assigned the formula of P_R2 in series at Fig 1
 
                  //cout << "User selected Fig.1 which is Resisotrs in series" << endl; // print out this message for classify which circuit user selected.
                  cout << "The value of current is I = " << i << "amperes" << endl; // print out the value of current I with unit current
                  cout << "The value of voltages V_R1 is V = " << v_r1 << "volts" <<endl; // print out the value of V_R1 with unit voltage
                  cout << "The value of voltages V_R2 is V_R2 = " << v_r2 << "volts" << endl; // print out the value of V_R2 with unit voltage
                  cout << "The values of power P_R1 is P_R1 = " << p_r1 << "watts" << endl; // print out the value of the power P_R1 with unit power
                  cout << "The values of power P_R2 is P_R2 = " << p_r2 << "watts" << endl; // print out the value of the power P_R2 with unit power
                  cout << "The total of power P_total is P_total = " << p_r1 + p_r2 << "watts" <<endl; // print out the total value of powers with unti power
            }
 
            else if (selectCircuit == 2) // User selected the circuit of Fig 2
            {
                  double i_r1 = v1 / r1; // Assigned the formula of I_R1 in parallel at Fig 2
                  double i_r2 = v1 / r2; // Assigned the formula of I_R2 in parallel at Fig 2
                  double p_r1 = v1 * i_r1; // Assigned the formula of P_R1 in parallel at Fig 2
                  double p_r2 = v1 * i_r2; // Assigned the formula of P_R2 in parallel at Fig 2
 
                  //cout << "User selected Fig.2 which is Resisotrs in parallel" << endl; // print out this message for classify which circuit user selected.
                  cout << "The value of current I_R1 is I_R1 = " << i_r1 << "amperes" << endl; // print out the value of current I_R1 with unit current
                  cout << "The value of current I_R2 is I_R2 = " << i_r2 << "amperes" << endl; // print out the value of current I_R2 with unit current
                  cout << "The value of power P_R1 is P_R1 = " << p_r1 << "watts" << endl; // print out the value of power P_R1 with unit power
                  cout << "The values of power P_R2 is P_R2 = " << p_r2 << "watts" << endl; // print out the value of power P_R2 with unit power
                  cout << "The total of power P_total is P_total = " << p_r1 + p_r2 << "watts" << endl; // print out the total values of power with unit power
            }
 
            cout << "Select the circut between 1(Fig. 1) and 2(Fig. 2)" << endl; // Prompt select the circuit again , if user put 0, th
            cin >> selectCircuit; // User enter to select circuit between 1 and 2.
      }
 
      return 0;
     
}
