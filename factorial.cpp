#include <iostream>
using namespace std;
int main(){
    double fact, i, n;
    char ch;
    while(true){
        fact = 1;
        i = 1;
        cout << "Enter Your Number :";
        cin >> n;
        while(i <= n){
            fact = fact * i;
            i++;
        }
        cout << "Factorial of " << n << " is " << fact << endl;        
        cout << "Do you want to continue. Press Y for yes and N for no :";
        cin >> ch;
        if(ch == 'N' || ch == 'n'){
            break;
        }
    }
    return 0;
}