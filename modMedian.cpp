#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
int generateRandom()
{
    return rand() % 100;
}
double findMean(int data[], int size)
{
    int sumData = 0;
    for (int i = 0; i < size; i++)
    {
        sumData = sumData + data[i];
    }
    double mean = (double)sumData / size;
    return mean;
}
double findMedian(int data[], int size)
{
    return data[49];
}
int findMod(int data[], int size)
{
    int mode = 0;
    int frequency[10];
    for (int i = 0; i < size; i++)
    {
        frequency[data[i] - 1]++;
    }
    for (int i = 0; i < size; i++)
    {
        frequency[data[i] - 1]++;
        if (frequency[i] >= frequency[i + 1])
        {
            mode = frequency[i];
        }
        else
        {
            mode = frequency[i + 1];
        }
    }
    return mode;
}
int main()
{
    srand(time(0));
    int mean;
    double mod, median;
    int data[99] = {0};
    for (int i = 0; i < 99; i++)
    {
        data[i] = generateRandom();
    }
    mean = findMean(data, 99);
    sort(data, data + 99);
    mod = findMod(data, 99);
    cout << mean;
    return 0;
}
// I give my best to do this program but even putting all of my efforts I can't do it
// So Sir This is my humble request that discuss this program in class So that I can be able to Clear My concept about it ...