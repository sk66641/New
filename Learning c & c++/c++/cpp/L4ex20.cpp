#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter here" << endl;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + n - row;
        while (col <= row)
        {
            cout << ch << "  ";
            ch = ch + 1;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}