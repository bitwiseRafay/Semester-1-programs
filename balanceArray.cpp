#include <iostream>
using namespace std;

bool isBalanced(char arr[])
{
    char stackArr[100];
    int top = -1;

    for (int i = 0; arr[i] != '0'; i++)
    {
        char ch = arr[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            top++;
            stackArr[top] = ch;
        }

        else if (ch == ')' || ch == '}' || ch == ']')
        {

            if (top == -1)
                return false;

            char topChar = stackArr[top];
            top--;

            if (ch == ')' && topChar != '(')
                return false;
            if (ch == '}' && topChar != '{')
                return false;
            if (ch == ']' && topChar != '[')
                return false;
        }
    }

    if (top == -1)
        return true;
    else
        return false;
}

int main()
{
    char arr[100];
    cin.getline(arr, 100);

    if (isBalanced(arr))
        cout << "True";
    else
        cout << "False";

    return 0;
}