#include <iostream>
using namespace std;
int main(){
   int arr[] = {2,3,4,5,6,-1} ;
   int n = 6;
   int k = 0;
   cin>>k;
 k = k % n;
   cout<<"Original Array";
   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";

   }
   cout<<endl;
   for(int i = 0;i < n;i++){
    cout<<arr[(i+k)%n]<<" ";
   }
   
    return 0;
}