// Write a program that inputs a number in a global variable glvar. The program calls a function
// mulGlobal that multiplies that values of global variable by 2 its return type is void. The main function
// then displays the value of global variable before and after the function .
#include <iostream>
using namespace std;
int glvar;
void mulGlobal()
{
    glvar = glvar * 2;
}
int main()
{
    int modified;
    cout << "Please enter global variable :";
    cin >> glvar;
    cout << "the value of global variable before the function =" << glvar << endl;
    mulGlobal();
    cout << "the value of global variable after the function =" << glvar << endl;

    return 0;
}