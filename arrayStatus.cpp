#include <iostream>
using namespace std;
int num[10];
bool isIncreasing=false;
bool isDecreasing=false;
int main(){
   //Input elements of array
     for(int i = 0;i<10;i++){
        cout<<"Enter number "<<i+1<<endl;
        cin>>num[i];
     }
     //checking array
     for(int i = 0;i<9;i++){
        if(num[i]<num[i+1]){
         isIncreasing = true;
        }
        else if(num[i]>num[i+1]){
         isDecreasing = true;
        }
       
     }
     //output block
     if(isIncreasing && isDecreasing){
      cout<<"Array is increasing and decreasing";
     }
     else if(isIncreasing){
      cout<<"Array is increasing";
     }
      else if(isDecreasing){
      cout<<"Array is decreasing";
     }
     else{
      cout<<"Array is Constant";;
     }
     
    return 0;
}