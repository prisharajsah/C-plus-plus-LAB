#include <iostream>
using namespace std;

class Student{
    protected:
    int rollNo;
    char name[50];

    public:
    void inputStudent(){
        cout<<"Enter Roll no: ";
        cin>>rollNo;

        cout<<"Enter Name: ";
        cin>>name;
    }
};

class Exam : public Student{
    protected:
    int marks[6];

    public:
    void getMarks(){
        cout<<"\nEnter marks of 6 subjects:\n";

        for(int i=0;i<6;i++){
            cout<<"Subject " << i+1 << ": ";
            cin>>marks[i];
        }
    }
};

class Result : public Exam{
    int total;
    int percentage;
    
    public:
    void calculateResult(){
        total=0;
        for(int i=0;i<6;i++){
            total+=marks[i];
        }
        percentage=total/6;
    }

    void display(){
        cout<<"\n------DETAILS------ ";
        cout<<"\nRoll no: "<<rollNo;
        cout<<"\nName: "<<name;
        cout<<"\n------RESULT------ ";
        cout<<"\nTotal Marks: "<<total;
        cout<<"\nPercentage: "<<percentage<<"%";
    }
};

int main(){
    Result r;
    r.inputStudent();
    r.getMarks();
    r.calculateResult();
    r.display();

    return 0;
}