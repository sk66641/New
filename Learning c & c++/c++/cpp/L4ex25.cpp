#include <iostream>
using namespace std;
int main()
{
    int n, row = 1, i = 1;
    cout << "Enter the number" << endl;
    cin >> n;
    while (row <= n)
    {
        int space = 1;
        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }
        int col = 1;
        while (col <= n + 1 - row)
        {
            cout << i;
            col++;
        }
        cout << endl;
        row++;
        i++;
    }
    return 0;
}