#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    x=0;
    y=1;
    z=1;
    cout<<"Enter number to display table :";
    cin>>x;
    while(y<=10){
        z=x*y;
        cout<<x<<" * "<<y<<" = "<<z<<"\n";
        y++;
    }
    return 0;
}