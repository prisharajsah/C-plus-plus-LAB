#include <iostream>
using namespace std;

class Shape{
    private:
    float radius,length,width;

    public:
    Shape(float r,float l,float w){
        radius=r;
        length=l;
        width=w;
    }

    void circlePerimeter(){
        cout<<"Perimeter of the circle: " << 2*3.14*radius << endl;
    }

    void rectanglePerimeter(){
        cout<<"Perimeter of rectangle: " << 2*(length+width) << endl;
    }

    ~Shape(){
        cout<<"Destructor called" << endl;
    }};

int main(){
    Shape s1(2,3.2,3.4);
    s1.circlePerimeter();
    s1.rectanglePerimeter();
    return 0;
}
