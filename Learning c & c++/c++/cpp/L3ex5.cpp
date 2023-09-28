#include <iostream>
using namespace std;
int main()
{
    int n, N, i = 2;
    cout << "enter here" << endl;
    cin >> n;
    while (i < n || N != 0)
    {
        if (n%i==0)
        {
            cout<<n<<" is "
        }
        
        N = n % i;
        i = i + 1;
    }
    if (N == 0)
    {
        cout << n << " is not prime" << endl;
    }
    else
    {
        cout << n << " is prime" << endl;
    }
}