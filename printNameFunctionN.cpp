#include <iostream>
using namespace std;
//Declaring a function that can to print name n times
void displayNTimes(int n, string name)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Welcome " << name << ". Let's learn functions." << endl;
    }
}
//Input taking
int main()
{
    int n;
    string name;
    cout << "Enter Name :";
    cin >> name;
    cout << "Enter number of times name is printed :";
    cin >> n;
    displayNTimes(n, name);        //n,name is transfered to displayNTimes function

    return 0;
}