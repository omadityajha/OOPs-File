// WAP to use a friend function.

//                    Author: OMADITYA JHA  

#include <iostream> 
using namespace std;    

#include <iostream>
using namespace std;

class friend_class
{
    int a;
    int b;
public:
    void setvalue() {a=10; b=20;}
    friend float mean(friend_class s);
};

float mean(friend_class s)
{
    return (s.a+s.b)/2.0;
}

int main (){
    friend_class s1;
    s1.setvalue();
    cout<<"Mean of a and b is: "<<mean(s1)<<"\n";
    return 0;
}