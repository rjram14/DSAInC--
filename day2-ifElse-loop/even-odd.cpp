#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter ur Number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
}