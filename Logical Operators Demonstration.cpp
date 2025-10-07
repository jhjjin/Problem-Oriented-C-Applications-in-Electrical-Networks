#include <iostream>
using namespace std;

int main()
{
    bool a;
    bool b; 
    bool c;

    cout <<"NOT operator: " << endl;
    cout << "a\t" << "!a" << endl;
    a = false;
    c = !a;
    cout << boolalpha << a << "\t" << c << endl;
    a = true;
    c = !a;
    cout << boolalpha << a << "\t" << c << endl;

    cout << endl;
    cout << "AND operator: " << endl;
    cout << "a\tb\t" << "a && b" << endl;
    a = false;
    b = false;
    c = a&&b;
    cout << boolalpha << a << "\t" << b << "\t" << b << "\t" << c << endl;

    return 0;
}
