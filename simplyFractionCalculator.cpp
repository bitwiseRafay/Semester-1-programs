
#include <iostream>
using namespace std;
int resultDe, resultNum;
int menu()
{
    int choice;
    cout << "Welcome to fraction calculator. Here you can enter operation,neumerator and denominator and you will get required result \n";
    cout << "Please select your operation:" << endl;
    cout << "1. Press 1 for addition" << endl;
    cout << "2. Press 2 for subtraction" << endl;
    cout << "3. Press 3 for divide" << endl;
    cout << "4. Press 4 for multiply" << endl;
    cin >> choice;
    return choice;
}
void multiplyFractions(int num1, int deNum1, int num2, int deNum2)
{
    resultNum = num1 * num2;
    resultDe = deNum1 * deNum2;
}
void divideFractions(int num1, int deNum1, int num2, int deNum2)
{
    resultNum = num1 * deNum2;
    resultDe = deNum1 * num2;
}
int gcdFunction(int deNum1, int deNum2)
{
    while (deNum2 != 0)
    {
        int reminder = deNum1 % deNum2;
        deNum1 = deNum2;
        deNum2 = reminder;
    }
    return deNum1;
}
int lcmFunction(int deNum1, int deNum2)
{
    int gcd = gcdFunction(deNum1, deNum2);
    int lcm = (deNum1 * deNum2) / gcd;
    return lcm;
}
void addFractions(int num1, int deNum1, int num2, int deNum2)
{
    int lcm = lcmFunction(deNum1, deNum2);
    resultDe = lcm;
    resultNum = ((lcm / deNum1) * num1) + ((lcm / deNum2) * num2);
}
void subtractFractions(int num1, int deNum1, int num2, int deNum2)
{
    int lcm = lcmFunction(deNum1, deNum2);
    resultDe = lcm;
    resultNum = ((lcm / deNum1) * num1) - ((lcm / deNum2) * num2);
}

int main()
{
    int num1, num2, deNum1, deNum2, choice;
    char ch = 'Y';
    choice = menu();
    cout << "Enter numerator for fraction 1: ";
    cin >> num1;
    cout << "Enter denominator for fraction 1: ";
    cin >> deNum1;
    cout << "Enter numerator for fraction 2: ";
    cin >> num2;
    cout << "Enter denominator for fraction 2: ";
    cin >> deNum2;

    while (ch == 'Y')
    {

        switch (choice)
        {
        case 1:
        {
            addFractions(num1, deNum1, num2, deNum2);
            break;
        }
        case 2:
        {
            subtractFractions(num1, deNum1, num2, deNum2);
            break;
        }
        case 3:
        {
            divideFractions(num1, deNum1, num2, deNum2);
            break;
        }
        case 4:
        {
            multiplyFractions(num1, deNum1, num2, deNum2);
            break;
        }
        }
        cout << num1 << " / " << deNum1;
        if (choice == 1)
        {
            cout << " + ";
        }
        else if (choice == 2)
        {
            cout << " - ";
        }
        else if (choice == 3)
        {
            cout << " / ";
        }
        else
            cout << " * ";
        int gcd = gcdFunction(resultNum, resultDe);
        cout << num2 << " / " << deNum2 << " = " << resultNum / gcd << " / " << resultDe / gcd << endl;
        cout << "Do you want to continue for same fraction (Y/N) :";
        cin >> ch;
        if (ch == 'Y')
        {
            choice = menu();
        }
    }

    return 0;
}