#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159

double voltage_supply(double time);
double current(double voltage, double resistance);
void calc_voltages(double resistor[], int array_size, double current, double voltage[]);

int main()
{
    const int numOfRes = 8;
    double resistors[numOfRes];
    double resTotal = 0.0;
    
    for (int i = 0; i < numOfRes; ++i)
    {
        cout << "Enter the value of R" << i << " : ";
        cin >> resistors[i];
        resTotal += resistors[i];
    }

    cout << "t [s]\t Vs [V]\t i [A]\t";
    for(int i = 0; i < numOfRes; i++)
    {
        cout << "VR " << i << "[V]" << "\t";
    }
    cout << endl;

    cout << "=====\t ======\t =====\t";
    for (int i = 0; i < numOfRes; i++)
    {
        cout << "======" << "\t";
    }
    cout << endl;
    
    for(double t = 0.0000; t < 0.0011; t += 0.0001)
    {
        double voltage[numOfRes];
        double currentVal = current(voltage_supply(t), resTotal);
        calc_voltages(resistors, numOfRes, currentVal, voltage);

        cout << fixed << setprecision(4); 
        cout << t << "\t" << voltage_supply(t) << "\t" << currentVal << "\t";

        for(int i = 0; i < numOfRes; i++)
        {
            cout << voltage[i] << "\t";
        }
        cout << endl;
    }

    return 0;
}

double voltage_supply(double time)
{
    return 5 * cos ((2 * PI * pow(10,3))*time); 
}
double current(double voltage, double resistance)
{
    return voltage / resistance;
}
void calc_voltages(double resistor[], int array_size, double current, double voltage[])
{
    for(int i = 0; i < array_size; i++)
    {
        voltage[i] = current * resistor[i];
    }
}
