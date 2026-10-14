#include <iostream>
#include <cmath>
using namespace std;

float AREA(float r){
    return 3.14 * r * r;
}

int AREA(int l,int b){
    return l * b;
}

float AREA(float a,float b,float c){
    if(a+b<=c || a+c<=b || b+c<=a){
        cout<<"Not a valid triangle!\n";
    }
    else{
        float s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
}

int main(){
    float rad,a,b,c;
    int l,w;

    cout<<"Enter radius of circle: ";
    cin>>rad;
    cout<<"Area of circle: "<<AREA(rad);

    cout<<"\n\nEnter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>w;
    cout<<"Area of rectangle: "<<AREA(l,w);

    cout<<"\n\nEnter side a of triangle: ";
    cin>>a;
    cout<<"Enter side b of triangle: ";
    cin>>b;
    cout<<"Enter side c of triangle: ";
    cin>>c;
    cout<<"Area of triangle: "<<AREA(a,b,c);

    return 0;
}