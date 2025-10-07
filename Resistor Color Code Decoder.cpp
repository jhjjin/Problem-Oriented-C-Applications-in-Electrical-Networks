#include <iostream>     // Allows program to output data to the screen
#include <cstring>      // Provides the commonly used methods for C style string manipulation
using namespace std;    // Include namespace to avoid having to write std::
 
//Prototype
void greeting();        // Print out the geeting message
 
int main()              // Function main begins program execution
{
    greeting();         // Print out the greeting message
 
    cout << "           ----------------------------         " << endl;           // Print out the text-based dipiction of circuit in Fig.1 Line 15~42.
    cout << "           |   |  |    |  |    |  |   |            " << endl;
    cout << "  ---------|   |  |    |  |    |  |   |---------        " << endl;
    cout << "           |   |  |    |  |    |  |   |            " << endl;
    cout << "  ---------|   |  |    |  |    |  |   |---------         " << endl;
    cout << "           |   |  |    |  |    |  |   |            " << endl;
    cout << "           ----------------------------         " << endl;
    cout << "                |        |       |              " << endl;
    cout << "                ---      ---     ---            " << endl;
    cout << "                  |        |       |            " << endl;
    cout << "                  |        |       |            " << endl;
    cout << "                   st       nd     Multiplier    " << endl;
    cout << "                  1        2                     " << endl;
    cout << "                 Digit    Digit                  " << endl;
    cout << "        Black     0         0       x1           " << endl;
    cout << "        Brown     1         1      x10            " << endl;
    cout << "        Red       2         2      x10^2          " << endl;
    cout << "        Orange    3         3      x10^3          " << endl;
    cout << "        Yellow    4         4      x10^4          " << endl;
    cout << "        Green     5         5      x10^5          " << endl;
    cout << "        Blue      6         6      x10^6          " << endl;
    cout << "        Violet    7         7      x10^7          " << endl;
    cout << "        Grey      8         8      x10^8          " << endl;
    cout << "        White     9         9      x10^9          " << endl;
    cout << "        Gold                       x10^-1         " << endl;
    cout << "        Silver                     x10^-2         " << endl;
    cout << "        Fig. 1 : 3-Band Resistor Color Code       " << endl;
    cout << "=======================================================================" << endl;
 
    const int color_count = 12; // Initialize the color count with const int
    const char* band_colors[12] = { "black", "brown", "red", "orange", "yellow", "green", \
                                             "blue", "violet", "grey", "white", "gold", "silver" };

    // Initialize 12 different band colors with string -array of characters
    const double multipliers[12] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 10000000000,0.1, 0.01 };

    // Initialize 12 different multipliers with const double
    int first_count, second_count;               // Declare the first count and second count with int
    double multiplier;                           // Declare the multiplier with double
 
    char first_color[12], second_color[12], third_color[12];   // Declare the first,second,third color with string
    cout << "Enter the 3 band colors; they" << endl;           // Prompt what is 3 band colors, and the color name should be lowercase Line 54~55
    cout << "must be in lowercase letter: ";
    cin >> first_color >> second_color >> third_color;         // User enter 3 band colors
    cout << "\n\n"; // Insert two new line
 
    for (int i = 0; i < color_count; i++)                      // Using for loop until color count, and increases the i++
    {
        if (strcmp(band_colors[i], first_color) == 0)          // if the band color is same as first color, the program enters if condition. This is compare two string.
        {
            first_count = i;                                   // Assign the specific value i to first_count
            break;                                             // It helps to exit the for loop
        }
    }
    cout << "First Digit:      " << first_color << " = " << first_count << endl;   // Print out First Digt: with first_color and first_count
 
    for (int i = 0; i < color_count; i++)                                          // Using for loop until color_count, and increases i++
    {
        if (strcmp(band_colors[i], second_color) == 0)                             // if the band color is same as second color, the program enters if conditon.
        {
            second_count = i;                                                      // Assign the specific value i to second count
            break;                                                                 // It helps to exit the for loop
        }
    }
    cout << "Second Digit:     " << second_color << " = " << second_count << endl; // Print out Second Digit with second_color and second_count
 
    for (int i = 0; i < color_count; i++)                                          // Using for loop until color_count, and increases i++
    {
        if (strcmp(band_colors[i], third_color) == 0)                              // if the band color is same as the third color, the program enters if condition.
        {
            multiplier = multipliers[i];                                           // Assign the specific value multipliers to multiplier.
            break;                                                                 // It helps to exit the for loop
        }
    }
    cout << "Multiplier:       " << third_color << " = " << multiplier;           // Print out Multiplier with third_color and multiplier.
    cout << "\n\n";                                                               // Insert two new line.
 
    double resistor_value = (first_count * 10 + second_count) * multiplier;       // Assign the resistor value formula to resistor_value
    cout << "Resistor value = " << resistor_value << " ohms" << endl;             // Print out Resistor value with resistor_value with unit.
}
void greeting()                                                                   // Print out the greeting message
{
    cout << "=======================================================================" << endl; // Print out the greeting message Line 95~97
    cout << "This Program Uses array of pointers and pointer-based string manipulation" << endl;
    cout << "to decode 3-Band Resistor Color Codes as described in Fig. 1" << endl;
 
}
