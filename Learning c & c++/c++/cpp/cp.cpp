#include <iostream>
using namespace std;
int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    int i, j;
    if (size(s) == size(t))
    {
        for (i = 0; i < size(s); i++)
        {
            for (j = 0; j < size(s); j++)
            {
                if (t[i] == s[j])
                {
                    break;
                }
            }
            if (j == size(s))
            {
                cout << "false" << endl;
                break;
            }
            else if (i != size(s) - 1)
            {
                continue;
            }
            else
            {
                cout << "true" << endl;
                break;
            }
        }
    }
    else
    {
        cout << "false" << endl;
    }
}