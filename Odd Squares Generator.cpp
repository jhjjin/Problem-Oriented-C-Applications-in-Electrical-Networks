#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("odd_squares.txt");
    
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            myfile << pow(i, 2) << endl;
        }
    }
    cout << "Program finished!\n";
    myfile.close();
}
