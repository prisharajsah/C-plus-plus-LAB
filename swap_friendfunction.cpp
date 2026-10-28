#include <iostream>
using namespace std;

class B;

class A{
    int x;

    public:
    void getData(){
        cout<<"Enter first number: ";
        cin>>x;
    }
    friend void swap(A,B);
};

class B{
    int y;

    public:
    void getData(){
        cout<<"Enter second number: ";
        cin>>y;
    }
    friend void swap(A,B);
};

void swap(A a, B b){
    int temp;

    cout<<"\nBefore Swapping: ";
    cout<<a.x<<" "<<b.y;

    temp = a.x;
    a.x = b.y;
    b.y = temp;

    cout<<"\nAfter Swapping: ";
    cout<<a.x<<" "<<b.y;
}

int main(){
    A a;
    B b;

    a.getData();
    b.getData();
    swap(a,b);

    return 0;
}