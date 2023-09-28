// ex 9 with another method
#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter the number here" << endl;
    cin >> n;
    while (row <= n)
    {
        int column = 1;

        while (column <= row)
        {
            cout << (row - column) + 1 << " ";

            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}