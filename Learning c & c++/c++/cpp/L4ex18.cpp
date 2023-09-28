#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter number" << endl;
    cin >> n;
    while (row <= n)
    {
        char ch = 'A' + row - 1;
        int col = 1;
        while (col <= row)
        {
            cout << ch << " ";
            ch = ch + 1;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}