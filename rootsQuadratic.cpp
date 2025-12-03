#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c,d,x1,x2;
cout<<"Enter the value of a :";
cin>>a;
cout<<"Enter the value of b :";
cin>>b;
cout<<"Enter the value of c :";
cin>>c;
d=b*b-4*a*c;
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
if(d>0){
cout<<"Roots are real and unequal<<endl";
cout<<x1<<" and "<<x2;
}
else if(d==0){
cout<<"Roots are real and equal"<<endl;
cout<<"Roots of given Quadratic Equations are "<<x1<<" and "<<x2;
}
else{
cout<<"Roots are imaginary and different"<<endl;
}
return 0;
}