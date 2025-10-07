/*  
    4byte 
    0x XX XX YY YY 
       ----- -----    -> source 
       Destination
*/
#include <iostream>
using namespace std;

int main()
{
    char input[20];
    int header = 0;
    int destination = 0;
    int source = 0;

    cout << "Enter pacekt header: ";
    cin >> input;

    header = strtol(input, NULL, 16);
    
    cout << "You entered: " << header << endl; 
    
    destination =header & 0xFFFF0000;
    destination >>= 16;
    cout << "Destination: " << hex << uppercase <<  destination << endl;

    source = header & 0x0000FFFF;
    cout << "Source: " << hex << uppercase << source << endl;

    if(destination == 0x2BAD && source == 0xBEEF)
    {
        cout << "Message Received\n";
    }
    else
    {
         cout << "Message Not Received\n";
    }
}
