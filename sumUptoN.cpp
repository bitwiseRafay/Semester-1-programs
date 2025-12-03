#include <iostream>
using namespace std;
int main(){
int num;
int sum;
int i;
cout<<"Enter your number :";
cin>>num;
i=1;
sum=0;
while(i<=num){
sum=sum+i;
i=i+1;
}
cout<<sum;
return 0;
}