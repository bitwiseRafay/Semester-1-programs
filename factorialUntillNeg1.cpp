#include <iostream>
using namespace std;
int main(){
    int fact = 1;
   int i = 1;
   int n = 0;
    while(true){
   cout<<"Enter the number to find factorial (Enter -1 to exit) :";
   cin>>n;
   if(n == -1){
    break;
   }
   while(i<=n){
    fact = fact * i;
    i++;
   }
   cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    }
    return 0;
}