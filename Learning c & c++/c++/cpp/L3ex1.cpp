// check whether input is lower case or upper case or numeric
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter here"<<endl;
    cin>>ch;
    if (ch>='a' && ch<='z')
    {
        cout<<"this is lower case"<<endl;
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"this is a upper case"<<endl;
    }
    else{
        cout<<"this is numeric"<<endl;
    }
    
    
    
        
    }
