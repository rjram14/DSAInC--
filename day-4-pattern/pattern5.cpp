#include <iostream>
using namespace std;

int main()
{
    int row, col;
    // int count = 1;
    for (row = 1; row <= 5; row = row + 1)
    {

        for (col = 1; col <= 5; col++)
        {
            // cout << count << " ";
            // count++;
            cout << (row - 1) * 5 + col << " "
        }
        cout << endl;
    }
}