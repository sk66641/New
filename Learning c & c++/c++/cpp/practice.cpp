#include <iostream>
using namespace std;

int main()
{
struct {
    int roll;
    string name;
    char section;
}myStructure;
myStructure.roll=48;
myStructure.name="Sanu Kumar";
myStructure.section='A';
cout << myStructure.roll << endl;
cout << myStructure.name << endl;
cout << myStructure.section << endl;


}
