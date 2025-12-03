#include <iostream>
using namespace std;
int main(){
    int num[5];
    int i = 0;
    int sum = 0;
    int product = 1;
    for(i = 0;i<5;i++){
    cout<<"Enter number :"<<endl;
    cin>>num[i];
    sum=sum+num[i];
    product=product*num[i];
    }
    cout<<"Sum of all elements is "<<sum<<endl;
    cout<<"Product of all elements is "<<product;
    return 0;
}