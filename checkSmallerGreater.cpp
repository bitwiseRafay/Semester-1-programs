#include <iostream>
using namespace std;
int main() {
    int num[100];
    int n;
    int greater;
    int smallest;
    cout<<"Enter total No below 100 :";
    cin>>n;
    for(int i = 0; i < n; i++) {
        cout<<"Enter Number "<<i+1<<" :"<<endl;
        cin >> num[i];
        if(num[i]>=num[i-1]){
            greater = num[i];
            smallest = num[i-1];
        }
        else 
        {
           greater = num [i-1];
           smallest = num[i];
        }
        
    }
    cout<<"Greatest No in the array :"<<greater;
     cout<<"Smallest No in the array :"<<smallest;
    return 0;
}