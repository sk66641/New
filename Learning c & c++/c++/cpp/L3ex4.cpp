// the sum of even natural number upto n
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i = 2;
    cout << "Enter here" << endl;
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "the sum of even natural number upto " << n << " is: " << sum << endl;
}