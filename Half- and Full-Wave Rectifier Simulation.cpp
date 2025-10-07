#include <iostream> 
#include <iomanip>
using namespace std;
#define PI 3.14159

void vac_supply(double vamx, double f, double *time, int time_size, double *vac);
void vac_half_wave_rectify(double *vac, int size);
void vac_full_wave_rectify(double *vac, int size);

int main()
{
    double vmax, f;

    const int time_size = 20;
    double time[time_size];
    double vac[time_size];
    double vac_half[time_size];
    double vac_full[time_size];


    cout << "what is Vmax value?" << endl;
    cin >> vmax;
    cout << "what is f value?" << endl;
    cin >> f;

    cout << "time (s)\t Vs (V)\t Vhf (V)\t Vf1 (v)" << endl;
    cout << "========\t =====\t =======\t =======" << endl;

    for(int i = 0; i < time_size; i++)
    {
        time[i] = i * 0.1;
    }

    cout << fixed << setprecision(2);
    for(int i = 0; i < time_size; i++)
    {
        vac_supply(vmax, f, time, time_size, vac);
        vac_half[i] = vac[i];
        vac_full[i] = vac[i];

        vac_half_wave_rectify(vac_half, time_size);
        vac_full_wave_rectify(vac_full, time_size);

        cout << time[i] << "\t" << vac[i] << "\t" << vac_half[i] << "\t" << vac_full[i] << endl;

    }

}

void vac_supply(double vmax, double f, double *time, int time_size, double *vac)
{
    for(int i = 0; i < time_size; i++)
    {
        double t = time[i];
        vac[i] = vmax * cos (2 * PI * f * t);
    }
}
void vac_half_wave_rectify(double *vac, int size)
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
        vac[i] = abs(vac[i]);
    }
}
