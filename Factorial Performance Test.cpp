#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// iteration i factorial 
int ifactorial(int n);

int main() 
{
    auto start = high_resolution_clock::now();
    // function being measured goes here
    cout << "Iteration Fatorial: " << ifactorial(1000) << endl;

    auto stop = high_resolution_clock::now();
    auto duration = (stop - start);
    cout << "Duration: " << duration.count() << endl;

}

int factorial (int n)
{
    int result;
    for (int i = n ; i >= 1; i--)
    {
        result *= i;
    }
    return result; 
}
