#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    char c = 'A';
    cout << "Enter n" << endl;
    cin >> n;
    while (row <= n)

    {
        int column = 1;
        while (column <= n)
        {

            cout << c << " ";
            column++;
        }
        cout << endl;
        row++;
        c = c + 1;
    }
}