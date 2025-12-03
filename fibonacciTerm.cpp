#include <iostream>
using namespace std;
int main(){
int a;
int b;
int c;
int i;
int n;
cout<<"Enter number of terms :";
cin>>n;
a=0;
b=1;
i=1;
cout<<"Required Fibonacci series is "<<a<<","<<b;
while(i<=n-2){
c=a+b;
a=b;
b=c;
cout<<","<<c;
i=i+1;
}
return 0;
}