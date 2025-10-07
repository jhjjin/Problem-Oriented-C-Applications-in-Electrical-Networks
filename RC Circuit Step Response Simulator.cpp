#include <iostream>
#include <cmath>
#include <fstream>   // ifstream and ofstream are defined by this module
using namespace std;

void greeting();

struct RCParams
{
    double v0;
    double vs;
    double r;
    double c;
};


int main()
{
    greeting();
    cout << "                           t = 0               " << endl;
    cout << "                             /                  " << endl;
    cout << "            R            ---/---                " << endl;
    cout << "       ---/\\/\\/\\--------/    |    ----       " << endl;
    cout << "       |                       ---       |      " << endl;
    cout << "       |                       \\/       |      " << endl;
    cout << "       |                                 |      " << endl;
    cout << "      ---                                |    +   " << endl;
    cout << "     | + |                           C  ---   V  " << endl;
    cout << "  Vs | - |                              ---   -   " << endl;
    cout << "      ---                                |        " << endl;
    cout << "       |                                 |         " << endl;
    cout << "       |                                 |         " << endl;
    cout << "       |                                 |         " << endl;
    cout << "       -----------------------------------         " << endl;
    cout << "    Fig. 1: RC circuit with voltage step input     " << endl;

    ofstream my_csv_stream;
    my_csv_stream.open("rc_step_response.csv");


    double t0, tStep, tf;
    RCParams circuit;

    cout << "Enter V0(V), Vs(V), R(ohms), C(F)" << endl;
    cin >> circuit.v0 >> circuit.vs >> circuit.r >> circuit.c;
    cout << "Enter t0(s), tf(s), tstep(s): " << endl;
    cin >> t0 >> tf >> tStep; 

    my_csv_stream << "Time(s),Vc(V)" << endl;
    for(double i = t0; i <= tf; i += tStep)
    {
        my_csv_stream << i << ",";
        if (i < 0)
        {
            my_csv_stream << circuit.v0 << endl;
        }
        else
        {
            my_csv_stream << circuit.vs + (circuit.v0 - circuit.vs) * exp(-i / (circuit.r * circuit.c)) << endl;
        }
        
    }
    my_csv_stream << tf << "," << circuit.vs + (circuit.v0 - circuit.vs) * exp(-tf / (circuit.r * circuit.c)) <<  endl; // final iteration tStep (tf-t0)
    cout << "Program Finished\n";
    my_csv_stream.close();
    return 0;

}

void greeting()
{
    cout << "=================================================================================" << endl;
    cout << "The program that uses structs and files streams to create a csv-formatted file" << endl;
    cout << "and write the RC-circuit step response of the standard circuit given by figure 1" << endl; 
    cout << " The program shall write the time and capacitor voltage values to the csv file " << endl;
    cout << "in pairs so that we can open the file and plot the results in Microsoft Excel " << endl;
    cout << "=================================================================================" << endl;

}
