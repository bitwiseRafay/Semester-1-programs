#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    //Arrays of size 3 for 3 customers
int mango[3];
int orange[3];
int banana[3];
int totalBill[3];
//Input block
for(int i = 0;i<3;i++){
    cout<<"Customer "<<i+1<<" :"<<endl;  //Customer 1,2,3
    cout<<"Enter number of mangoes :";
    cin>>mango[i];
    cout<<"Enter number of oranges :";
    cin>>orange[i];
    cout<<"Enter number of banana :";
    cin>>banana[i];
}
//Calculation block
for(int i = 0;i<3;i++){
   totalBill[i]=(mango[i]*20) + (orange[i]*10) + (banana[i]*5);
}
//Output block
cout<<"************************************************************************"<<endl;
cout<<setw(20)<<left<<"Customer NO."<<setw(10)<<"Mangoes"<<setw(10)<<"Oranges"<<setw(10)<<"Bananas"<<setw(10)<<"Total Bill"<<endl;
cout<<"************************************************************************"<<endl;
for(int i = 0;i<3;i++){
    cout<<setw(20)<<left<<i+1<<setw(10)<<mango[i]<<setw(10)<<orange[i]<<setw(10)<<banana[i]<<"Rs."<<totalBill[i]<<endl;
    }
return 0;
}