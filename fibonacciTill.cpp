#include <iostream>
using namespace std;
int main(){
int n,a,b,c,i;
cout<<"Enter your number :";
cin>>n;
a=0;
b=1;
i=1;
cout<<"Required Fibonacci series is "<<a<<","<<b;
while(true){
c=a+b;
a=b;
b=c;
if(c>=n){
break;
}
else{
cout<<","<<c;
i=i+1;
}
}
return 0;
}