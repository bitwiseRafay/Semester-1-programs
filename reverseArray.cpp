#include <iostream>
using namespace std;
int main() {
    int num[10];
    for(int i = 0; i < 10; i++) {
        cout<<"Enter Number "<<i+1<<" :"<<endl;
        cin >> num[i];
    }
    for(int i = 9; i >= 0; i--) {
        cout << num[i] << " "<<endl;
    }
    return 0;
}