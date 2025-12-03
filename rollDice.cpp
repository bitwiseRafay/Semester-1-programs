// Write a C++ function that roll a dice. Function name should be rollDice whice return a value from
// 1 to 6. Call function to roll a dice 50000 times and print the probability of each number in the following
// format
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int diceRoll()
{
    return rand() % 6 + 1;
}
int main()
{
    srand(time(0));
    int frequency[6] = {0};
    int value[50000];
    double prob[6] = {0};
    for (int i = 0; i < 50000; i++)
    {
        value[i] = diceRoll();
        frequency[value[i] - 1]++;
    }
    for (int i = 0; i < 6; i++)
    {
        prob[i] = (double)frequency[i] / 50000;
    }
    cout << "Dice Value \t Frequency \t Probability \n\n";
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " \t " << frequency[i] << " \t " << prob[i] << endl;
    }
    return 0;
}