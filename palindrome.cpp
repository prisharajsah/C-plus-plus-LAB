#include <iostream>
using namespace std; 

int main(){
    int num,original,rev=0,temp;
    cout<<"Enter a number: ";
    cin >> num;

    original=num;
    
    while(num!=0){
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }

    if(original == rev){
        cout << "Palindrome number";
    }
    else{
        cout << "Not a Palindrome number";
    }
    return 0;
}