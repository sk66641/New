#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter the number here" << endl;
    cin >> n;
    while (row <= n)
    {
        int column = 1, value = row;

        while (column <= row)
        {
            cout << value;
            value = value - 1;
            column=column+1;
        }
        cout << endl;
        row = row + 1;
    }
}