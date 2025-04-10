// Implement the concept of single inheritance.

//                     Author: OMADITYA JHA 

#include <iostream>
using namespace std;

class B
{
    int a;
public:
    int b;
    void set_ab();
    int get_a(void);
    void show_a(void);
};

class D : public B
{
    int c;
public:
    void mul(void);
    void display(void);
};

void B ::set_ab(void)
{
    a = 10;
    b = 20;
}
int B ::get_a()
{
    return a;
}
void B :: show_a()
{
    cout << "Value of a is: " << a << "\n";
}
void D ::mul()
{
    c = b * get_a();
}
void D ::display()
{
    cout << "Value of a is: " << get_a() << "\n";
    cout << "Value of b is: " << b << "\n";
    cout << "Value of c is: " << c << "\n";
}

int main(){
    D d1;
    d1.set_ab();
    d1.mul();
    d1.show_a();
    d1.display();

    d1.b = 100;
    d1.mul();
    d1.display();
    
    return 0;
}