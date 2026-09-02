#include <iostream>
using namespace std; 

void swap_value(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout << "After swap: a = " << x << " ,b= " << y << endl;
}

void swap_ref(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a = 40;
    int b = 50;
    int x = 5;
    int y = 10;
    
    cout << "Call By reference:" << endl;
    cout << "Before swap: x = " << x << " ,y = " << y << endl;
    swap_ref(&x,&y);
    cout << "After swap: x = " << x << " ,y= " << y << endl;

    cout << "Call By Value:" << endl;
    cout << "Before swap: a = " << a << " ,b = " << b << endl;
    swap_value(a,b);
    
    return 0;
}