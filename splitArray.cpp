// ...existing code...
#include <iostream>
using namespace std;

int main(){
    int num[10];
    int array1[5];
    int array2[5];

    for(int i = 0 ; i < 10 ; i++){
        cout << "Enter number " << i+1 << " :" << endl;
        cin >> num[i];
        if(i < 5){
            array1[i] = num[i];          
        }
        else{
            array2[i - 5] = num[i];        
        }
    }
cout<<"Array 1 is :"<<endl;
for(int j = 0 ; j < 5 ; j++){
    cout<<array1[j]<<endl;
}
cout<<"Array 2 is :"<<endl;
for(int j = 0 ; j < 5 ; j++){
    cout<<array2[j]<<endl;
}
    return 0;
}
