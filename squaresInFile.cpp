#include <iostream>
#include <fstream>
using namespace std;
int main(){
  int num[100] ;
  int sq[100];
  int i = 0;
  ifstream inFile("numbers.txt");
  ofstream outFile("squares.txt");
  while(inFile>>num[i]){
    sq[i] = num[i] * num[i];
    outFile<<sq[i]<<" ";
    i++;
  }
    return 0;
}