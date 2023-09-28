#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "enter here" << endl;
    cin >> n;
    int count = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << count << " ";
            count = count + 1;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}