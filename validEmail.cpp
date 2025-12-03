#include <iostream>
using namespace std;
string eMail;
int posDot = 0;
int posAt = 0;
int main(){
    cout<<"Enter your email :";
    cin>>eMail;
       posAt = eMail.find('@');          //Checking postion of @
     posDot = eMail.rfind('.');          //Checking postion of .
   if((posDot==-1 || posAt==-1) || posDot <= posAt ){      //In case @ or . not found 
    cout<<"Invalid email";
   }
   if (posDot > posAt){
    cout<<"Valid email";
   }
    return 0;
} 