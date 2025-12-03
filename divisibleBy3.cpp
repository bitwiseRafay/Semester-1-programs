#include <iostream>
using namespace std;
int main(){
int x;
int y;
cout<<"Enter Your Number :";
cin>>x;
y=x%3;
if(y==0){
cout<<x<<"is divisible by 3";
}
else{
cout<<x<<" is not divisible by 3";
}
return 0;
}
