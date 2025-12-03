#include <iostream>
using namespace std;
//Checking even or odd
bool isEven(int n)
{
    bool even = true;
    if (n % 2 == 0)  //even
    {
        bool even = true;
    }
    else               //odd
    {
        bool even = false;
    }
    return even;
}
//Taking input and printing outputs
int main()
{
    int n;
    cout << "Please enter number: ";
    cin >> n;
    bool myNumber = isEven(n);
    if (myNumber)
    {
        cout << endl
             << "Number is even";
    }
    else
    {
        cout << endl
             << "Number is odd";
    }
    return 0;
}