#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter the number" << endl;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col++;
        }
        col = 1;
        while (col <= (row - 1) * 2)
        {
            cout << "* ";
            col++;
        }

        col = n - row + 1;
        while (col >= 1)
        {
            cout << col << " ";
            col--;
        }

        cout << endl;

        row++;
    }
    return 0;
}
