#include <iostream>
using namespace std;

int main()
{

    int prev = 0, curr = 1, f, i, n;

    for (i = 1; i <= n; i++)
    {
        f = prev + curr;
        f = curr;
        curr = prev;
        cout << f;
        return 0;
    }
}