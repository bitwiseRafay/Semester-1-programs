#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    int y;
    i=1;
cout<<"Enter your number to check whather it is prime or not :";
cin>>n;
while(i<+n-1){
y=n%i;
if(y==0){
cout<<"Your number is a prime No";
break;
}else{
    i++;
}
cout<<"Your number is not a prime no";
}
return 0;
}