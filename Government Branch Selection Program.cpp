// calculates the sum of all even numbers,
 // the sum of all odd numbers and the sum of all multiples of 5 from 0 to a 1000. 
 //The program must perform these calculations 3 times: 
 //One time using a single while loop, 
 //one time using a single do...while loop 
 // one time using a for loop

#include <iostream>
 using namespace std; 
 int main()
 {
    int branch;
    int agency;

    //1: Legislative, 2:Executive, 3: Judicial 
    cout << "Enter branch(1-3): " << endl;
    switch(branch)
    {
        case 1: //1: Legislative,
        {
            cout << "Enter agency (1: senate, 2: House): " << endl;
            cin >> agency;

            switch (agency)
            {
                case 1: // 1: Senate 
                    cout << "You selected the senate in the Legislative branch!";
                    break;
                case 2: // 2: House 
                     cout << "You selected the House in the Legislative branch!";
                    break;
                default: 
                    break;
            }

            break;
        }
        case 2: //2:Executive
        {
            cout << "Enter agency (1: President, 2: Vice-President): " << endl;
            cin >> agency;

            switch (agency)
            {
                case 1: // 1: President 
                     cout << "You selected the president in the Executive branch!";
                    break;
                case 2: // 2: Vice Presidents 
                    break;
                default: 
                    break;
            }
    
            break; 
        }
        case 3: //3: Judicial 
        {
            cout << "Enter agency (1: Supreme Court, 2: Court of Appeals): " << endl;
            cin >> agency;

            switch (agency)
            {
                case 1: // 1: Supreme Court
                    break;
                case 2: //  2: Court of Appeals 
                    break;
                default: 
                    break;
            }

            break;
        }
        default:
               cout << "You selected an INVALID agency!";

            break;

    }

    return 0;
 }
 
