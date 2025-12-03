#include <iostream>
using namespace std;
int main(){
int n;
long  long fact;
int i;
cout<<"Enter the number to find the factorial :";
cin>>n;
i=1;
fact=1;
while(i<=n){
fact=fact*i;
i=i+1;
}
cout<<"Factorial of "<<n<<" is "<<fact;
return 0;
}