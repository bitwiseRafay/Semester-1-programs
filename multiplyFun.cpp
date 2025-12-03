// Write a function to multiply two numbers. The function will define two parameters as default
// parameter. Main() function can pass any number of parameters 0 or 1 or 2 parameters to function and
// the function will multiply these number. Finally, function will return calculated value. Also, you will
// not use simple * multiply operator to multiply two numbers.

#include <iostream>
using namespace std;
int multiply(int a = 3, int b = 6)     //Function For Multiplication
{
    int result = 0;
    for (int i = 0; i < b; i++)
    {
        result += a;
    }
    return result;
}
int main()
{
    char choice;
    int resultant = 0;
    cout << "Do you want to Enter a number (Y/N) :";
    cin >> choice;
    switch (choice)
    {
    case 'Y':                      //if user want to enter number
    {
        int num1;
        cout << "Enter your number :";
        cin >> num1;
        cout << "Do you want to Enter another number (Y/N) :";
        cin >> choice;
        if (choice == 'Y')   //if user want to another number
        {
            int num2;
            cout << "Enter another number :";
            cin >> num2;
            resultant = multiply(num1, num2);
        }
        else if (choice == 'N')
        {
            resultant = multiply(num1);
        }
        break;
    }

    case 'N':
    {
        resultant = multiply();
    }
    }
    cout << resultant;
    return 0;
}