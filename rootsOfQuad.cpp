#include <iostream>
#include <cmath>
using namespace std;
int main(){
float a;
float b;
float c;
float d;
float x1;
float x2;
cout<<"Enter the value of a :";
cin>>a;
cout<<"Enter the value of b :";
cin>>b;
cout<<"Enter the value of c :";
cin>>c;
d=b*b-4*a*c;
if(d<0){
cout<<"Roots are imaginary";
}
else{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
cout<<"Roots of the equation are "<<x1<<" and "<<x2;
}
return 0;
}