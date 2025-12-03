#include <iostream>
using namespace std;
int main(){
double a,b,y;
string op;
cout<<"Enter your expression :";
cin>>a>> op >> b;                                      //" " not avaliable            
if(op == "+"){
    y=a+b;
    cout << a << " " << op << " " << b << " = " << y;
}
else if(op == "-") {
    y=a-b;
    cout << a << " " << op << " " << b << " = " << y;
}
else if(op == "/") {
    if(b==0){
cout<<"Division by 0 is not possible!";
}
else{
y=a/b;
    cout << a << " " << op << " " << b << " = " << y;
}
}
else if(op == "*") {
    y=a*b;
    cout << a << " " << op << " " << b << " = " << y;
}
else if(op == "%") {
if(b!=0){
    y=int(a)%int(b);                 //Modulus only work with int;
    cout << a << " " << op << " " << b << " = " << y;
}
else{
cout<<"Division by 0 is not possible!";
}
}
else if(op == ">"){
y=(a>b);
cout<<a<<" "<<op<<" "<<b<<" = "<<y;
}                           
else if(op == "<"){
y=(a<b);
cout<<a<<" "<<op<<" "<<b<<" = "<<y;
}
else if(op == "=="){
y=(a==b);
cout<<a<<" "<<op<<" "<<b<<" = "<<y;
}
else if(op == "!="){
y=(a!=b);
cout<<a<<" "<<op<<" "<<b<<" = "<<y;
}
else if(op == "&&"){
y=(int(a)&&int(b));
cout<<a<<" "<<op<<" "<<b<<" = "<<y;
}
else if(op == "&"){
y=(int(a)&int(b));
cout<<a<<" "<<op<<" "<<b<<" = "<<y;
}
else if(op == "||"){
y=(int(a)||int(b));
cout<<a<<" "<<op<<" "<<b<<" = "<<y;
}
else if(op == "|"){
y=(int(a)|int(b));
cout<<a<<" "<<op<<" "<<b<<" = "<<y;
}
else{
    cout<<"Invalid Expression";
}
return 0;
}