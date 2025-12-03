#include <iostream>
using namespace std;
int main(){
int sum,num;
sum=0;
while(true){
cout<<"Enter your numbers,enter -1 to stop :";
cin>>num;
if(num==-1){
break;
}
if(num>=0){
sum=sum+num;
}
}
cout<<"Sum of numbers are :"<<sum;
return 0;
}