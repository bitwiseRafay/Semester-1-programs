#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter side 1 :";
cin>>a;
cout<<"Enter side 2 :";
cin>>b;
cout<<"Enter side 3 :";
cin>>c;
if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b){
cout<<"Given triangle is a right angle triangle";
}else{
cout<<"Given triangle is not a right angle triangle";
}
return 0;
}