#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter the number " << endl;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= n + 1 - row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}