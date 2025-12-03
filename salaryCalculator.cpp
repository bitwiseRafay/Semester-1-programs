#include <iostream>
using namespace std;
int main(){
char x;
cout<<"Enter your status :";
cin>>x;
if(x=='s'|| x=='S' || x=='j' || x=='J'){
if(x=='s'|| x=='S'){
cout<<"Rs.400 a week";}
else{
cout<<"Rs.275 a week";
}
}
else{
cout<<"invalid";
}
return 0;
}
