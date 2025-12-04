#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3},
                     {4,5,6},  
                     {7,8,9}};
    for(int i = 0; i < 3; i++){  //row fixed
        cout<<arr[0][i]<<" ";
    }
    for(int i = 1; i < 3; i++){
        cout<<arr[i][2]<<" ";     //column fixed
    }
    for(int i = 1; i >= 0 ; i--){   //row fixed
        cout<<arr[2][i]<<" ";     
    }
     for (int i = 1; i < 2; i++){
        cout << arr[i][0] << " ";
     }
    return 0;
}