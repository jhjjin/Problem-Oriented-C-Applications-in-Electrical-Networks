#include <iostream>
#include <cmath>
using namespace std;

void greeting();

int main()
{
    int numberFood, numberDrink, numOfFood, numOfDrink;
    int moreOrNot = 1;
    greeting();

    do
    {
        cout << "Selected the foods?" << endl;
        cin >> numberFood;

        switch (numberFood)
        {
            case 1: // Noodle 
            {
                cout << "You selected Noodle." << endl;

                cout << "What you want to drink? " << endl;
                cin >> numberDrink;
                switch (numberDrink)
                {
                    case 1: // Soda 
                    {
                        cout << "You selected Soda" << endl;
                        break;
                    }
                    case 2: // Orange Juice  
                    {
                        cout << "You selected Orange Juice" << endl;
                        break;
                    }
                    case 3: // Diet Coke
                    {
                        cout << "You selected Diet Coke" << endl;
                        break;
                    }
                    case 4: // Lemonade 
                    {
                        cout << "You selected Lemonade" << endl;
                        break;
                    }
                }
            }
            case 2: // Pizza 
            {
                cout << "You selected Pizza" << endl;

                cout << "What you want to drink? " << endl;
                cin >> numberDrink;
                switch (numberDrink)
                {
                    case 1: // Soda 
                    {
                        cout << "You selected Soda" << endl;
                        break;
                    }
                    case 2: // Orange Juice  
                    {
                        cout << "You selected Orange Juice" << endl;
                        break;
                    }
                    case 3: // Diet Coke
                    {
                        cout << "You selected Diet Coke" << endl;
                        break;
                    }
                    case 4: // Lemonade 
                    {
                        cout << "You selected Lemonade" << endl;
                        break;
                    }
                }
            }
            case 3: // Sandwich
            {
                cout << "You selected Sandwich" << endl;

                cout << "What you want to drink? " << endl;
                cin >> numberDrink;
                switch (numberDrink)
                {
                    case 1: // Soda 
                    {
                        cout << "You selected Soda" << endl;
                        break;
                    }
                    case 2: // Orange Juice  
                    {
                        cout << "You selected Orange Juice" << endl;
                        break;
                    }
                    case 3: // Diet Coke
                    {
                        cout << "You selected Diet Coke" << endl;
                        break;
                    }
                    case 4: // Lemonade 
                    {
                        cout << "You selected Lemonade" << endl;
                        break;
                    }
                }
            }
            case 4: // Salad
            {
                cout << "You selected Salad" << endl;

                cout << "What you want to drink? " << endl;
                cin >> numberDrink;
                switch (numberDrink)
                {
                    case 1: // Soda 
                    {
                        cout << "You selected Soda" << endl;
                        break;
                    }
                    case 2: // Orange Juice  
                    {
                        cout << "You selected Orange Juice" << endl;
                        break;
                    }
                    case 3: // Diet Coke
                    {
                        cout << "You selected Diet Coke" << endl;
                        break;
                    }
                    case 4: // Lemonade 
                    {
                        cout << "You selected Lemonade" << endl;
                        break;
                    }
                }
            }
            
        }
        cout << "You need more foods or drinks ? Yes -1, No - 0 " << endl;
        cin >> moreOrNot; 
    }while(moreOrNot == 0);
    

}


void greeting()
{
    cout << "=====================================================================================" << endl;
    cout << "                        Welcome to Jeong's restaurant!                     " << endl;
    cout << "                           Select foods and drinks                             " << endl;
    cout << "=====================================================================================" << endl;
    cout << "\n===================================================================================" << endl;
    cout << "                   This is the foods and drinks with prices                        " << endl;
    cout << "Foods: 1 - Noodle ($10), 2 - Pizza ($15), 3 - Sandwich ($8), 4 - Salad ($10)  " << endl;
    cout << "Drinks: 1 - Soda ($4), 2 - Orange Juice ($5), 3 - Diet Coke ($3), 4 - Lemonade ($4)" << endl;
    cout << "=====================================================================================" << endl;
}
