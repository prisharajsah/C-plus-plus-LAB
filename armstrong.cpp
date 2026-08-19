#include <iostream>
using namespace std; 

int main(){
    int num,sum=0,rem,temp,i;
    cout<<"Enter a number: ";
    cin >> num;

    temp=num;
    for(i=temp;i>0;i=i/10){
        rem=i%10;
        sum=sum + rem*rem*rem;
    }

    if(sum == num){
        cout << "Armstrong number";
    }
    else{
        cout << "Not an Armstrong number";
    }
    return 0;
}