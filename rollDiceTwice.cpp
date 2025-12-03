// Create a function isSumGreater that use the same function of rollDice to roll a dice twice. If sum
// of both dice is greater than 7 isSumGreater should return true otherwise return false.
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int diceRoll()
{
    return rand() % 6 + 1;
}
bool isSumGreater()
{
    int value1 = diceRoll();
    int value2 = diceRoll();
    return (value1 + value2 > 7);
}
int main()
{
    srand(time(0));
    if (isSumGreater())
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
}