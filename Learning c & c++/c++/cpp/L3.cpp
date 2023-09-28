// if else 
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two numbers a and b" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else
    {
        cout << b << " is greater than " << a << endl;
    }
    if (a>0)
    {
        cout<<"a is positive"<<endl;
    }
    else{
        if (a<0)
        {
            cout<<"a is negative"<<endl;
        }
        else{
            cout<<"a is zero"<<endl;
        }
        
    }

}

