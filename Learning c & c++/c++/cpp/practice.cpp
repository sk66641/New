#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Amount: ";
    cin >> amount;
    int account = 0, value;
    while (amount >= 25)
    {
        value = amount * 0.67;
        account = account + value;
        amount = amount * 0.27;
    }
    cout << "Account: " << account << endl;
}