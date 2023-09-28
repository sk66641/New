#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter here" << endl;
    cin >> n;
    while (row <= n)
    {
        int column = 1;
        while  (column <= row)
            {
                cout << "*";
                column = column + 1;
            }
        cout << endl;
        row = row + 1;
    }
}