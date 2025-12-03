// Write a recursive function to compute the sum of the first N natural numbers (1 + 2 + ... + N).
#include <iostream>
using namespace std;
//function to sum upto n
int sum(int num){
    if (num == 0){
        return 0;
    }
    else{
        return num + sum(num - 1); //recursion occur
    }
}
int main(){
    int num;
cout<<"Enter number :";
cin>>num;
cout<<sum(num);   //call the function and get output
    
}