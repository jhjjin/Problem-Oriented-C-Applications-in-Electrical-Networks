#include <iomanip> // Include to control decimal places in cout
#include <iostream> // Allows program to output data to the screen
using namespace std; // include namespace to avoid having to write std::
 
int main()
{
      cout << "A o----------o----------o----------" << endl;
      cout << "             |          |         | " << endl;
      cout << "             |          |         | " << endl;
      cout << "             >          >         > " << endl;
      cout << "RAB          <          <         < " << endl;
      cout << "             >          >         > " << endl;
      cout << "             <          <         < " << endl;
      cout << "             > R1       > R2      > R3 " << endl;
      cout << "             |          |         | " << endl;
      cout << "             |          |         | " << endl;
      cout << "B o----------o----------o----------" << endl;
      cout << "     Fig. 1 - Parallel Resistance   " << endl;
 
 
      int r1_size, r2_size; // Declare the step/increment size for R_1 and R_2.
      double r_ab, r1_min, r1_max, r2_min, r2_max, r3_min, r3_max; // Declare R_AB,R1_minimum, R1_maximum, R2_minimum, R2_maximum, R3_minimum,maximum.
     
      cout << "What is the value of R_AB?" << endl; // Prompt the user enter the value of R_AB
      cin >> r_ab; //User inputs the value of R_AB
 
      cout << "What is the minimum value of R_1?" << endl; // Prompt the user enter the minimum value of R_1
      cin >> r1_min; // User inputs the minimum value of R_1
      cout << "What is the maximum value of R_1?" << endl; // Prompt the user enter the maximum value of R_1
      cin >> r1_max; // User inputs the maxmimum value of R_1
      cout << "What is the step/increment size for R_1?" << endl; // Prompt the step/increment size for R_1
      cin >> r1_size; // User inputs the step/increment size for R_1
     
      cout << "What is the minimum value of R_2?" << endl; // Prompt the user enter the minimum value of R_2
      cin >> r2_min; // User inputs the minimum value of R_2
      cout << "What is the maximum value of R_2?" << endl; // Prompt the user enter the maximum value of R_2
      cin >> r2_max; // User inputs the maxmimum value of R_2
      cout << "What is the step/increment size for R_2?" << endl; // Prompt the step/increment size for R_2
      cin >> r2_size; // User inputs the step/increment size for R_2

      cout << "R3 Possible Values(ohms)" << endl; // Print out the syntax about first line of chart
      
      /*print row titles*/
      cout << "       R2(ohms)   "; // print out the R2(ohms).
      for (int i = r2_min; i <= r2_max; i += r2_size) // Use the for loop to execute program untill reaching r2_max.
      {
            cout << i << "\t";    // print out the R2(ohms) value between r2_min and r2_max.
      }
      cout << endl; // inserts a new line.
      
      double r3; // Declare the R3 value.
      cout << "R1(ohms)"; // print out the R1(ohms).
      for (int i = r1_min; i <= r1_max; i += r1_size) // Use the for loop to execute program untill reaching r1_max.
      {     
            cout << endl; // inserts a new line
            cout << i << "\t\t"; // print out the R1(ohms) value between r1_min and r1_max
             for (int j = r2_min; j <= r2_max; j += r2_size) // Use the for loop to execute program untill reaching r2_max.
             {
                  r3 = (r_ab * i * j) / (i * j - r_ab * j- r_ab * i); // Assig the R3_minimum formula to r3_min. 
                  cout << r3 << fixed << setprecision(2) << "\t";  // print out the R3 Ohm 2 decimal places the for loop range.    
            }           
      }
      cout << endl; // inserts a new line

      return 0; // successfully completion.      
}
