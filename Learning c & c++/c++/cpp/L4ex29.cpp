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
            while (space <= n - row)
            {

                cout << "  ";
                space++;
            }
            int col = 1;
            while (col <= row)
            {
                cout << col << " ";
                col++;
            }
            col = row - 1;
            while (col >= 1)
            {
                cout << col << " ";
                col--;
            }

            cout << endl;

            row++;
        }
    }
    return 0;
}