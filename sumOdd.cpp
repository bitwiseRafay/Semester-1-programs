#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,digit,sum,y;
cout<<"Enter your number :";
cin>>n;
sum=0;
while(true){
digit=n%10;
y=digit%2;
if(n<=0){
cout<<sum;
break;
}
else{
if(y!=0){
sum=sum+digit;
}
}
n=floor(n/10);
}
return 0;
}