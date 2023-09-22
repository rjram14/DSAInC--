#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 100; i < 200; i++)
    {
        cout << i;
    }

    // print a to z

    for (char name = 'a'; name <= 'z'; name++)
    {
        cout << name << " ";
    }

    // print all no in reverse order

    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }

    // 1->100 (gap of 3 )

    for (int i = 1; i <= 100; i = i + 3)
    {
        cout << i << endl;
    }

    // ptint table of n

    int i, n;
    cout << "Enter any value: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << n * i << endl;
    }

    // cal power of number
    // int n, pow, i, num;
    // cout << "Enter the number:";
    // c >> n;
    // cout << "Enter the Pow";
    // c >> pow;
    // num = n;
    // for (i = 1; i < pow; i++)
    // {
    //     num = num * n;
    //     cout << num;
    // }
    // cout << num;

    // sum of n natural number

    int i, n;
    c >> n;
    sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
        cout << sum;
    }
    cout << sum;
    // n**2
    for (i = 1; i <= n; i++)
    {
        sum = sum + i * i;
        cout << sum;
    }

    //
    cout << (n * (n + 1)) / 2;
}