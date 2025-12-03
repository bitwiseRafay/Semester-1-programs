#include <iostream>
using namespace std;
int n = 0;
int factorial = 0;
// function to find factorial
int fact(int x)
{
    int xFact = 1;
    for (int i = 1; i <= x; i++)
    {
        xFact = i * xFact;
    }
    return factorial;
}
// Taking Inputs and outputs
int main()
{
    cout << "Enter number to find factorial :";
    cin >> n;
    factorial = fact(n);
    cout << "Factorial of " << n << " is " << factorial;
    return 0;
}