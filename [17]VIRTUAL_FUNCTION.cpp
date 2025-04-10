// Illustraye the concept of run-time polymorphism using virtual functions.

//                     Author: OMADITYA JHA

#include <iostream>
#include <cstring> 
using namespace std;     

class media
{
        protected:
            char title[50];
            float price;
        public:
            media(char *s, float a) 
            {strcpy(title, s); price = a;}
            virtual void display() {}

};

class book : public media
{
        int pages;
        public:
            book(char *s, float a, int p) : media(s, a) {pages = p;}
            void display();
};
class tape : public media
{
        float time;
        public:
            tape(char *s, float a, float t) : media(s, a) {time = t;}
            void display();
};

void book :: display()
{
    cout<<"Title: "<<title<<"\n"; 
    cout<<"Price: "<<price<<"\n"; 
    cout<<"Pages: "<<pages<<"\n"; 
}

void tape :: display()
{
    cout<<"Title: "<<title<<"\n"; 
    cout<<"Price: "<<price<<"\n"; 
    cout<<"Time: "<<time<<"\n";
}

int main()
{
    char * title = new char[30];
    float price,time;
    int pages;
    // Book Details
    cout<<"Enter Book Details"<<"\n";
    cout<<"Title: "; cin>>title;
    cout<<"Price: "; cin>>price;
    cout<<"Pages: "; cin>>pages;
book book1(title,pages,price);

    // Tape Details
    cout<<"Enter Tape Details"<<"\n";
    cout<<"Title: "; cin>>title;
    cout<<"Price: "; cin>>price;
    cout<<"Time: "; cin>>time;
    tape tape1(title,time,price);

    media *list[2];
    list[0] = &book1;
    list[1] = &tape1;

    cout<<"\n"<<"Media Details"<<"\n";
    cout<<"\n __________BOOK__________"<<"\n";
    list[0]->display();
    cout<<"\n __________TAPE__________"<<"\n";
    list[1]->display(); 

    return 0;
}