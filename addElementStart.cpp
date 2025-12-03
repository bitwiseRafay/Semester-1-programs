#include <iostream>
using namespace std;

int main() {
    int arr[100];   
    int n = 0;      
    int input;

    while (true) {
        cout << "Enter a number: ";
        cin >> input;
        if (input == -1) break; 

        
        for (int i = n; i > 0; i--) {
            arr[i] = arr[i-1];
        }

        
        arr[0] = input;
        n++;

        
        cout << "{";
        for (int i = 0; i < n; i++) {
            cout << arr[i];
            if (i != n-1) cout << ", ";
        }
        cout << "}" << endl;
    }

    return 0;
}