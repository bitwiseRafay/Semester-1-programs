#include <iostream>
using namespace std;
int main(){
int l;
int u;
int x;
int sum;
cout<<"Enter lower limit :";
cin>>l;
cout<<"Enter upper limit :";
cin>>u;
x=l;
sum=0;
while(x<=u){
sum=sum+x;
x=x+1;
}
cout<<"The sum is "<<sum;
return 0;
}