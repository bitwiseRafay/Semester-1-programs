#include <iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"Enter your Number :";
    cin>>n;
    x=1;
    while(x<=n){
        if(x%2==0){
            cout<<x<<",";
        }
        x++;
    }

    return 0;
}