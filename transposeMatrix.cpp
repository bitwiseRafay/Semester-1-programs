#include <iostream>
using namespace std;
int main()
{    
    int rows = 2;
    int columns = 3;
    int arr[rows][columns] = {{1, 2, 3},   //2x3 matrix
   
                     {7, 8, 9}};
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            
            cout << arr[j][i]<<" ";  //Rows become columns
            
            
        }
        cout<<endl;
    }
        return 0;
    }