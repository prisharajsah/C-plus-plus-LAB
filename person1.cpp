#include <iostream>
using namespace std;

class Person{
    char name[64];
    int age;
    char address[64];
    float salary;

    public:
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter address: ";
        cin>>address;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void display(){
        cout<<"Details:";
        cout<<"\n--------";
        cout<<"\nName:" << name << endl;
        cout<<"Age:" << age << endl;
        cout<<"Address:" << address << endl;
        cout<<"Salary:" << salary << endl;
    }   

    inline static void findAge(Person p[], int n){
        int youngest = 0;
        int oldest = 0;

        for(int i=1 ; i<n ; i++){
            if (p[i].age<p[youngest].age){
                youngest=i;
            }
            if (p[i].age>p[oldest].age){
                oldest=i;
            }            
        }
        cout<<"\nYoungest person: "<<endl;
        p[youngest].display();

        cout<<"\nEldest person: "<<endl;
        p[oldest].display();
    }
};

int main(){
    Person p[4];
    
    for(int i=0 ; i<4 ; i++){
        cout<<"\nEnter details of person: "<< i+1 <<endl;
        cout<<"-----------------------------"<<endl;
        p[i].input();
    }
    Person::findAge(p,4);
    return 0;
}