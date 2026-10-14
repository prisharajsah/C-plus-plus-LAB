#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    
    void operator++() {
        real++;
        imag++;
    }

    
    void operator--() {
        real--;
        imag--;
    }

    
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    
    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3), c2(2, 1);

    
    cout << "--- Unary Increment ---" << endl;
    cout << "Before: ";
    c1.display();
    ++c1;
    cout << "After:  ";
    c1.display();

   
    cout << "\n--- Unary Decrement ---" << endl;
    cout << "Before: ";
    c2.display();
    --c2;
    cout << "After:  ";
    c2.display();

    
    cout << "\n--- Binary Operations ---" << endl;
    Complex c3 = c1 + c2;
    cout << "Addition (c1 + c2): ";
    c3.display();

    Complex c4 = c1 - c2;
    cout << "Subtraction (c1 - c2): ";
    c4.display();

    return 0;
}