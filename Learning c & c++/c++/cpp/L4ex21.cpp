#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    char ch;
    cout << "enter the number" << endl;
    cin >> n;
    while (row <= n)
    {
        int col = 1;

        while (col <= row)
        {
            ch = 'D' - row + col;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}