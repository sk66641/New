// the sum of first n natural number
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i = 1;
    cout << "enter here" << endl;
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "the sum of first " << n << " natural number is " << sum << endl;
}