#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter the number" << endl;
    cin >> n;
    while (row <= n)
    {
        {
            int space = 1;
            while (space <= row - 1)
            {
                cout << " ";
                space++;
            }
            int col = 1;
            while (col <= n - row + 1)
            {
                cout << "*";
                col++;
            }
        }
        cout << endl;
        row++;
    }
}