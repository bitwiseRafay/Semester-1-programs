#include <iostream>
using namespace std;
int findMax(int operand1, int operand2)      //Function to perform M operation 
{
    if (operand1 > operand2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int performOperation(int operand1, int operand2, char operation)     //Function to perform operation
{
    int result;
    switch (operation)
    {
    case '+':                                                    
    {
        result = operand1 + operand2;
        break;
    }
    case '-':
    {
        result = operand1 - operand2;
        break;
    }
    case '*':
    {
        result = operand1 * operand2;
        break;
    }
    case '/':
    {
        result = operand1 / operand2;
        break;
    }
    case 'M':
    {
        result = findMax(operand1, operand2);       //calling finMax funtion
    }
    }
}
int main()
{
    int num1, num2;
    char ch;
    int resultant = 0;
    cout << "Enter operand first :";
    cin >> num1;
    cout << "Enter operand second :";
    cin >> num2;
    cout << "Enter operator :";
    cin >> ch;
    resultant = performOperation(num1, num2, ch);
    cout << num1 << " " << ch << num2 << " " << " = " << resultant;
    return 0;
}