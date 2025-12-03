#include <iostream>
using namespace std;
int main() {
    int index = 0;
    int n = 0;
    int num[10];
     bool found = false;
    cout<<"Enter size of array below 10"<<endl;
    cin>>n;
    //Input elements of array
    for(int i = 0; i < n; i++) {
         cout<<"Enter number "<<i+1<<endl;
        cin>>num[i];
    }
    cout<<"Enter number to search ";
    cin>>index;
    for(int i = 0; i < n; i++) {
       
       if (num[i]==index)
       {
        cout<<"Index of number is "<<i+1<<",";
        found = true;
        break;
       }
    }
     if(!found){                //if found = false
        cout<<"Number not found";
       }
    return 0;
}