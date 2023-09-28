#include <iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout << "enter here" << endl;
    cin>>n;
    while (row <= n)
    {
        int column=0;
        while (column < n)
        {
            cout << n-column;
            column = column + 1;
        }
        cout<<endl;
        row=row+1;
    }
}