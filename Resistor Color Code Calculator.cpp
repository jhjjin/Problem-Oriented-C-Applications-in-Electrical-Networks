#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int color_count = 12;
    const char* band_colors[color_count] = {"black", "brown", "red", "orange", "yellow", "green", \
                                            "blue", "violet", "grey", "white", "gold", "silber"};
    
    const double multipliers[12] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 10000000, 1000000000, 0.1, 0.01 };
                                    
    int first_count, second_count;
    double multiplier;

    char first_color[12], second_color[12], third_color[12];

    cout << "Enter the 3 band colors; they" << endl;
    cout << "must be in lowercase letters: ";
    cin >> first_color >> second_color >> third_color;
    cout << "\n\n";

    for(int i = 0; i < color_count; i++)
    {
        if(strcmp(band_colors[i], first_color) == 0)
        {
            first_count = i;
            break;
        }
    }
    cout << "First Digit:      " << first_color << " = " << first_count << endl;

    for(int i = 0; i < color_count; i++)
    {
        if(strcmp(band_colors[i], second_color) == 0)
        {
            second_count = i;
            break;
        }
    }
    cout << "Second Digit:      " << second_color << " = " << second_count << endl;

    for(int i = 0; i < color_count; i++)
    {
        if(strcmp(band_colors[i], third_color) == 0)
        {
            multiplier = multipliers[i];
            break;
        }
    }
    cout << "Multipliers:      " << third_color << " = " << multiplier << endl;

    double resistor_value = ((first_count * 10) + second_count) * multiplier;
    cout << "\n\n";
    cout << "Resistor value = " << resistor_value << " ohms";


    return 0;


}
