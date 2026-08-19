#include <iostream>
using namespace std; 

int main(){
    string str,original,rev;
    cout<<"Enter a String: ";
    cin >> str;

    original=str;
    
    for(int i=str.length()-1;i>=0;i--){
        rev=rev+str[i];
    }

    if(original == rev){
        cout << "Palindrome String";
    }
    else{
        cout << "Not a Palindrome String";
    }
    return 0;
}