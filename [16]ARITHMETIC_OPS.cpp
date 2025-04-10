// Perform arithmetic operations on pointers using C++.

//                    Author: OMADITYA JHA

#include <iostream>
using namespace std;
int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  
    int *ptr ;
    int i ;

    cout<<"The array values are: "<<"\n";

    for(i = 0; i < 10; i++)
    {
        cout<<num[i]<<"\n";
    }

    ptr = num;
    cout<<"The value of ptr is: "<<*ptr<<"\n";
    ptr++;
    cout<<"The value of ptr++ is: "<<*ptr<<"\n";
    ptr--;
    cout<<"The value of ptr-- is: "<<*ptr<<"\n";
    ptr = ptr + 2;
    cout<<"The value of ptr + 2 is: "<<*ptr<<"\n";
    ptr = ptr - 1;
    cout<<"The value of ptr - 1 is: "<<*ptr<<"\n";   
    ptr+= 3;
    cout<<"The value of ptr += 3 is: "<<*ptr<<"\n";
    ptr-= 2;
    cout<<"The value of ptr -= 2 is: "<<*ptr<<"\n";
    return 0;  
}