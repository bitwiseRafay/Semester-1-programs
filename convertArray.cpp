//Program to convert 2D array into 1D array
#include <iostream>
using namespace std;
int main()
{
    int k = 0;
    int arr[3][3]; //2D array
    int arr1[9];   //1D array
    for (int i = 0; i < 3; i++)    //For rows
    {                                  
        for (int j = 0; j < 3; j++)
        {                               //For columns
            
            cin >> arr[i][j];
            arr1[k] = arr[i][j];     //conversion
            k++;
        }
    }
       for(int i = 0;i < 9;i++){ 
        cout<<arr1[i]<<endl;
       }
    return 0;
}