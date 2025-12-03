#include <iostream>
using namespace std;
int main(){
int n,i,y;
cout<<"Enter your number to find the table :";
cin>>n;
i=1;
while(i<=10){
y=n*i;
cout<<n<<" * "<<i<<" = "<<y<<"\n";
i=i+1;
}
return 0;
}