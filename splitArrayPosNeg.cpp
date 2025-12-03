#include <iostream>
using namespace std;
int main() {
    int num[10];
    int pos[10];
    int neg[10];
    int posIndex=0;
    int negIndex=0;
    //Taking input
    for(int i = 0; i < 10; i++) {
         cout<<"Enter number "<<i+1<<endl;
        cin>>num[i];
        //Checking postive number
       if(num[i]>=0){
        pos[posIndex]=num[i];
        posIndex++;
       }
       //Checking negative number
       else{
       
        neg[negIndex]=num[i];
        negIndex++;
       }
    }
    //Output block
    for(int i = 0;i<posIndex;i++){
        cout<<pos[i]<<" ,";
    }
   for(int i = 0;i<negIndex;i++){
        cout<<neg[i]<<" ,";
    }
    return 0;
}