#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream myfilein;   // input file stream
    ofstream myfileout;  // output file stream
     
    // try to open the file (check if it exists)
    myfilein.open("my_file.txt");

    if (myfilein.is_open())
    {
        // already exists
        myfilein.close();
        myfileout.open("my_file.txt", ios::app);
        myfileout << "This is an old file" << endl;
        cout << "This is an old file" << endl;
        myfileout.close();

    }
    else
    {
        // file does not exist
        myfileout.open("my_file.txt");
        myfileout << "This is an NEW file" << endl;
        cout << "This is an NEW file" << endl;
        myfileout.close();
    }

    return 0;
}
