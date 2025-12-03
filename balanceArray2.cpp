// // : Write C++ program for identifying if given char array is balanced or not.   
// // Input: {}[]()  
// // Output: True  
// // Input: {([])}  
// // Input:     
// // Input: (){]}[  
// // Input: (    
// // Output: True  
// // Output: True  
// // Output: False  
// // Output: False 
#include <iostream>
using namespace std;
bool isBalance(string str){
    for(int i = 0;i < str.length(); i++){
        if(str[i] != '[' && str[i] != ']' && str[i] != '{' && str[i] != '}' && str[i] != ')' && str[i] != '('){
            
            return false;
        }
    }
     int indexSo = str.find('(');
    int indexMo = str.find('{');
    int indexLo = str.find('[');
    int indexSc = str.find(')');
    int indexMc = str.find('}');
    int indexLc = str.find(']');
    if(indexSo >  indexSc || indexMo >  indexMc || indexLo >  indexLc){
        return false;
    }
    if(((indexSo == -1 && indexSc != -1) || (indexSo != -1 && indexSc == -1)) && ((indexMo == -1 && indexMc != -1) || (indexMo != -1 && indexMc == -1)) && ((indexLo == -1 && indexLc != -1) || (indexLo != -1 && indexLc == -1))){
        return false;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter brackets :";
    
   cin>>str;
    
    bool isTrue = isBalance(str);
    if(isTrue){
        cout<<"True";
    }
     else{
        cout<<"False";
     }
    
    return 0;
}
// #include <iostream>
// using namespace std;
// int main(){
//      string str;
//      cin>>str;
//      for(int i = (str.length() -1) ; i >= 0;i--){
//         cout<<str[i];
//      }


// }