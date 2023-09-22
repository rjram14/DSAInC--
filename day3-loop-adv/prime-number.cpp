#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    if (n < 2)
    {
        cout << n << "Is not Prine Number";
        return 0;
    }
    else
    {

        for (int i = 2; i < n; i++)
        {
            if (n % 2 == 0)
            {
                cout << n << "is not prime number";
                return 0;
            }
        }

        cout << n << "Prime Number";
        return 0;
    }
}