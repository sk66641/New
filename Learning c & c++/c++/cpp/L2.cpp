#include <iostream>
using namespace std;
int main()
{
    /*shift + alt + A for multi line comment*/
    // ctrl + / for single line comment
    cout << "my name is sanu kumar" << endl;
    cout<<"Data type and variables"<<endl;
    int a6 = -4;
    cout << a6 << endl;
    char c = 's';
    cout << c << endl;
    float f = 1.456456;
    cout << f << endl;
    bool a7 = 1;
    cout << !a7 << endl;
    double d = 1.3453765;
    cout << d << endl;
    int s1 = sizeof(a6);
    cout << s1 << endl;
    int s2 = sizeof(f);
    cout << s2 << endl;
    int s3 = sizeof(d);
    cout << s3 << endl;
    cout<<"Type casting"<<endl;
    int e = 'a';
    cout << e << endl;
    char g = 98;
    cout << g << endl;
    char ch = 75675;
    cout << ch << endl;
    int a1 = -4, b1 = 4;
    cout << a1 << endl;
    cout << b1 << endl;
    unsigned int a2 = -4;
    cout << a2 << endl;
    cout<<"arithmetic operators"<<endl;
    int a3 = 3 / 5;
    cout << a3 << endl;
    float a4 = 3 / 5;
    cout << a4 << endl;
    float a5 = 3.5 / 7;
    cout << a5 << endl;
    cout<<"relational operators"<<endl;
    int a = 7, b = 6;
    bool first = a == b;
    cout << first << endl;
    bool second = a <= b;
    cout << second << endl;
    bool third = a >= b;
    cout << third << endl;
    bool fourth = a < b;
    cout << fourth << endl;
    bool fifth = a > b;
    cout << fifth << endl;
    bool sixth = a != b;
    cout << sixth << endl;
    cout<<"logical operators"<<endl;
    bool seventh = a >= b && a < b;
    cout << seventh << endl;
    bool eighth = a >= b || a < b;
    cout << eighth << endl;
}
