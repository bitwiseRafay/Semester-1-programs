#include <iostream>
using namespace std;
//Funtion to check maximum number
int maxNum(int a, int b)
{
  int max;
  if (a > b)
  {

    max = a; //a max
  }
  else
  {
    max = b;  //b max
  }
  return max;
}
//Taking input and printing output
int main()
{
  int num1, num2, numM;
  cout << "Enter Number 1 :";
  cin >> num1;
  cout << "Enter Number 2 :";
  cin >> num2;
  numM = maxNum(num1, num2);
  cout << "Maximum Number is :" << numM;
  return 0;
}