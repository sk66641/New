#include <iostream>
using namespace std;
int main()
{
    int n, row = 1, i = 1;
    cout << "enter the number" << endl;
    cin >> n;
    while (row <= n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout << "  "; //two spaces here
            space++;
        }
        int col = 1;
        while (col <= row)
        {
            cout << i << " ";
            col++;
            i++;
        }
        cout << endl;
        row++;
    }
    return 0;
}