#include <iostream>
#include <fstream>
using namespace std;
int main(){
  int num[100] ;
  int sumEven = 0;
   int sumOdd = 0;
  int i = 0;
  ifstream inFile("data.txt");
  while(inFile>>num[i]){
    if(num[i]%2 == 0){
        sumEven = sumEven + num[i];
       
    }
    else{
         sumOdd = sumOdd + num[i];
    }
  }
  
  cout<<"Sum of even numbers is = "<<sumEven<<endl;
  cout<<"Sum of odd numbers is = "<<sumOdd<<endl;
    return 0;
}





