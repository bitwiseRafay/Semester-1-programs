// Write a recursive function to compute the power series 1 + 2 + 4 + … + 2ⁿ. 
#include <iostream>
using namespace std;
double sqSum(int n){
    if(n == 0)
    return 1;
    else{
        return 2 * sqSum(n - 1) + 1;
    }
}
int main(){
    int n;
   cout<<"Enter Your Number :";
   cin>>n;
   double sum = sqSum(n);
   cout<<sum;
    return 0;
}