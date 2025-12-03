#include <iostream>
using namespace std;
int main(){
    int num, count;
    cout << "Enter your Number :";
    cin >> num;
    if (num == 0) {
        count = 1;
        cout << "Your number has " << count << " digit";
    }
    else {
        count = 0;
        if (num < 0) {
            num = -num; // Make negative numbers positive
        }
        while (num != 0) {
            num = num / 10;
            count++;
        }
        cout << "Your number has " << count << " digits";
    }
    return 0;
}