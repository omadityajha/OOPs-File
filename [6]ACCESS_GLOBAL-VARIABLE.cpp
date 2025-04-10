// WAP to access global variables using scope resolution operator.

//                    Author: OMADITYA JHA  

#include <iostream>
using namespace std;

int m = 10; // Global Variable

int main(){
    int m = 20; // Main function variable
    {
        int k = m;
        int m = 30; // Inner block variable
cout<<"We are in the inner block "<<"\n";
cout<<"K = "<<k<<"\n";
cout<<"M = "<<m<<"\n";
cout<<"::M = "<<::m<<"\n";
    }
    cout<<"\n"<<"We are in the outer block "<<"\n";
    cout<<"M = "<<m<<"\n";
    cout<<"::M = "<<::m<<"\n";

    return 0;
}