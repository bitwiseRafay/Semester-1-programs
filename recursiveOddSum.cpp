// Write a recursive function to compute the sum of odd numbers up to N (1 + 3 + 5 + ... + N).
#include <iostream>
using namespace std;
int oddSum(int n){
    if(n == 0)
    return 0;
    if(n % 2 != 0){
        return n + oddSum(n - 1);
    }
    else{
        return oddSum(n - 1);
    }
}
int main(){
    int n;
   cout<<"Enter Your Number :";
   cin>>n;
   cout<<oddSum(n);
    return 0;
}