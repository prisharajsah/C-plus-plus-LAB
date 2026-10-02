#include <iostream>
#include <cstring>
using namespace std;

class Person{
    char name[64];
    int age;
    char address[64];
    float salary;
    float hra, da, pf, tax, gross, net;

public:
    Person(char n[], int a, char ad[], float s){
        strcpy(name, n);
        age = a;
        strcpy(address, ad);
        salary = s;
    }

    void calculateSalary(){
        hra = 0.20 * salary;
        da = 0.50 * salary;
        gross = salary + hra + da;

        pf = 0.12 * salary;
        tax = 0.10 * gross;

        net = gross - pf - tax;
    }

    void displaySalarySlip(){
        cout << "\n-------- SALARY SLIP --------" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Address : " << address << endl;
        cout << "Basic Salary : " << salary << endl;
        cout << "HRA : " << hra << endl;
        cout << "DA : " << da << endl;
        cout << "Gross Salary : " << gross << endl;
        cout << "PF : " << pf << endl;
        cout << "Tax : " << tax << endl;
        cout << "Net Salary : " << net << endl;
    }
};

int main(){
    char name[4][64];
    char address[4][64];
    int age[4];
    float salary[4];

    for(int i = 0; i < 4; i++){
        cout << "\nEnter details of Person " << i + 1 << endl;

        cout << "Name: ";
        cin >> name[i];

        cout << "Age: ";
        cin >> age[i];

        cout << "Address: ";
        cin >> address[i];

        cout << "Salary: ";
        cin >> salary[i];
    }

    Person p[4] ={
        Person(name[0], age[0], address[0], salary[0]),
        Person(name[1], age[1], address[1], salary[1]),
        Person(name[2], age[2], address[2], salary[2]),
        Person(name[3], age[3], address[3], salary[3])
    };

    for(int i = 0; i < 4; i++){
        p[i].calculateSalary();
        p[i].displaySalarySlip();
    }
    return 0;
}