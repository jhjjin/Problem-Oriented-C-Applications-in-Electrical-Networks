#include <iostream>         // Allows program to output data to the screen
#include <cmath>            // helps to use math formula
#include <iomanip>          // Allow the program control decimal places
using namespace std;        // include namespace to avoid having to write std::

#define PI 3.14159 

void greeting();
void vac_supply(double vmax, double f, double *time, int time_size, double *vac);
void vac_half_wave_rectify(double *vac, int size);
void vac_full_wave_rectify(double *vac, int size);

// for half_wave_rectify erase the negative 
// full_wave_rectify flip the negative parts to positive 

int main () // Function main begins program execution
{
    double vmax, f;

    greeting();

    const int time_size = 20;
    double time[time_size];
    double vac[time_size];
    double vac_half[time_size];
    double vac_full[time_size];
    

    cout << "What is vmax in volts?" << endl;
    cin >> vmax;
    cout << "What is the value of f (frequency) in Hz?" << endl;
    cin >> f;

    cout << "time (s)  Vs (V)  Vhf (V)  Vf1 (V)" << endl;
    cout << "========   =====  =======  =======" << endl; 
    
   
    for (int i = 0; i < time_size; i++)
    {
        time[i] = i * 0.1;
    }

    cout << fixed << setprecision(2) << endl;
    for (int i = 0; i < time_size; i++)
    {
        vac_supply(vmax, f, time, time_size, vac);
        vac_half[i] = vac[i];
        vac_full[i] = vac[i];
        vac_half_wave_rectify(vac_half, time_size);
        vac_full_wave_rectify(vac_full, time_size);

        
        cout << setw(7) << time[i] << "\t" << setw(8) << vac[i] << "\t" << setw(4) << vac_half[i] << "\t" << setw(8) << vac_full[i] << endl;
    }
    return 0;
}
void greeting()
{
    cout << "The program will simulate the wave rectifications of the AC voltage source for the time span and time step shown in Fig. 3" << endl;
    cout << "program that passes arrays as pointers to functions to simulate half-wave and full-wave rectification of an AC voltage source " << endl;
}

void vac_supply(double vmax, double f, double *time, int time_size, double *vac)
{
    for (int i = 0; i < time_size; i++)
    {
        double t = time[i];
        vac[i] = vmax * cos(2 * PI * f * t);
    }
    
}
void vac_half_wave_rectify(double *vac, int size) // all positive
{

    for(int i = 0; i < size; i++)
    {
        if(vac[i] < 0)
        {
            vac[i] = 0;
        }
        else
        {
            vac[i] = vac[i];
        }
    }
    
}
void vac_full_wave_rectify(double *vac, int size)
{
   
    for(int i = 0; i < size; i++)
    {
       if(vac[i] < 0)
       {
            vac[i] = abs(vac[i]);
       }
       else
       {
           vac[i] = vac[i];
       }
    }
    
}
