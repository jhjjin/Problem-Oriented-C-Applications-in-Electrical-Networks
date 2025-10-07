#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Prototype
void greeting();
struct led_driver_params
{
    double vcc;
    double vLow;
    int numOfLeds;
    double ledIf;
    double ledVf;
};

struct resistor_params
{
    double resistance;
    double power;
};

void get_led_river_params_from_user(led_driver_params* p);
resistor_params calc_resistor_params(led_driver_params* p);

int main()
{
    greeting();
    led_driver_params ledParams;
    get_led_river_params_from_user(&ledParams);

    resistor_params resistorParams = calc_resistor_params(&ledParams);

    cout << "Resistor Parameters" << endl;
    cout<< "======================" << endl;
    cout << "Resistance:        " << resistorParams.resistance << " ohms" << endl;
   
    cout << "Min Power Rating:  " << resistorParams.power << " Watts" << endl;

}

// Definition
void greeting()
{
    cout <<"==============================================================================================" << endl;
    cout << " The program that uses structs and functions to calculate the resistor value and its minimum" << endl;
    cout << " power rating in the :ED driver circuit given by Fig. 1" << endl;
    cout << endl;
    cout << "                                                                            " << endl;
    cout << "          Vcc  o                                                            " << endl;
    cout << "               |                                                            " << endl;
    cout << "               | R1                                                         " << endl;
    cout << "               >                                                            " << endl;
    cout << "          Vr   <                                                            " << endl;
    cout << "               >                                                            " << endl;
    cout << "               <                                                            " << endl;
    cout << "               >                                                            " << endl;
    cout << "               |                                                            " << endl;
    cout << "               |-----------------------------------------                   " << endl;
    cout << "               |  D1                                    | Dn                " << endl;
    cout << "         Vf   ---                                      ---                  " << endl;
    cout << "       _      \\/    \\            ...                    \\/    \\                " << endl;
    cout << "  If  | |     ---   ---                                ---   ----                      " << endl; 
    cout << "      | |      |     \\/                                  |    \\/  " << endl;
    cout << "     -----     |     \\                                   |         \\ " << endl;
    cout << "      \\  /     |    ---                                  |        ---  " << endl;
    cout << "       \\/      |     \\/                                  |         \\/  " << endl;
    cout << "               |                                         |             " << endl;
    cout << " Vlow o--------o------------------------------------------             " << endl;
    cout << endl;
    cout <<"==============================================================================================" << endl;

}
void get_led_river_params_from_user(led_driver_params* p)
{
    cout <<"\n==============================================================================================" << endl;
    cout << "Enter Vcc voltage in voltags:                     ";
    cin >> p->vcc;
    cout << "Enter Vlow voltage in volts:                      ";
    cin >> p->vLow;
    cout << "Enter number of leds to drive:                    ";
    cin >> p->numOfLeds;
    cout << "Enter led's If (forward current) in Amps:         ";
    cin >> p->ledIf;
    cout << "Enter led's Vf (forward voltage) in volts:        ";
    cin >> p->ledVf;
   
}
resistor_params calc_resistor_params(led_driver_params* p)
{
    resistor_params result;
    
    result.resistance = (((p->vcc -p-> vLow) - p->ledVf) / (p->numOfLeds * p->ledIf));
    result.power = pow((p->numOfLeds * p->ledIf), 2) * result.resistance;

    return result;
}
