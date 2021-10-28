#include <iostream>
using namespace std;
double tro,uble;
int temp;
int main()
{
    cout << "First number:\n";
    cin >> tro;
    cout << "Second number:\n";
    cin >> uble;
    cout << "1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division:\n";
    cin >> temp;
    //addition
    if(temp == 1)
    {
        cout << (tro+uble) << endl;
    }
    //subtraction
    else if(temp == 2)
    {
        cout << (tro-uble) << endl;
    }
    //multiplication
    else if(temp == 3)
    {
        cout << (tro*uble) << endl;
    }
    else if(tro == 0 || uble == 0)
    {
        cout << "undefined"<< endl;
    }
    //division, but also a catchall. Prevents errors if user doesn't put in 1-4 
    else
    {
        cout << (tro/uble) << endl;
    }
}