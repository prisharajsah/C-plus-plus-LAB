#include <iostream>
using namespace std;

class Media{
    protected:
    char title[50];
    char publication[50];

    public:
    virtual void read(){
        cout<<"Enter title: ";
        cin>>title;

        cout<<"Enter publication: ";
        cin>>publication;
    }

    virtual void show(){
        cout<<"\nTitle: " << title;
        cout<<"\nPublication: " << publication;
    }
};

class Book : public Media{
    int pages;

    public:
    void read(){
        Media::read();
        cout<<"Enter number of pages: ";
        cin>>pages;
    }

    void show(){
        Media::show();
        cout<<"\nPages: " << pages;
    }
};

class Tape : public Media{
    float time;

    public:
    void read(){
        Media::read();
        cout<<"Enter playing time: ";
        cin>>time;
    }

    void show(){
        Media::show();
        cout<<"\nPlaying time: " << time << " minutes";
    }
};

int main(){
    Media *ptr;
    Book b;
    Tape t;

    cout<<"Enter Book Details \n";
    ptr=&b;
    ptr->read();
    ptr->show();

    cout<<"\n\nEnter Tape Details \n";
    ptr=&t;
    ptr->read();
    ptr->show();

    return 0;
}