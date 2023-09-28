// ex7 with another method

#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter here" << endl;
    cin >> n;

    while (row <= n)
    {
        int column = row;

        while (column < row * 2)
        {
            cout << column;

            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}