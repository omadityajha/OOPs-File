// WAP that will ask for a temprature in farenheit and display it in celsius scale and vice versa.

//                    Author: OMADITYA JHA

#include <iostream>
using namespace std;

int main() {
    float celsius,farenheit;
    int choice;
    cout<<"Select the appropriate option"<<"\n";
    cout<<"1. Farenheit to Celsius"<<"\n"<<"2. Celsius to Farenheit"<<"\n";
    cout<<"Enter your Choice  ";
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"Enter the temperature in Farenheit"<<"\n";
    cin>>farenheit;
    celsius=(farenheit-32)*5/9;
    cout<<"The temperature in Celsius is "<<celsius<<"\n";
        break;
    case 2:
    cout<<"Enter the temperature in Celsius"<<"\n";
    cin>>celsius;
    farenheit=(celsius*9/5)+32;
    cout<<"The temperature in Farenheit is "<<farenheit<<"\n";
        break;
    default:
    cout<<"Invalid Choice"<<"\n";
        break;
    }
    return 0;
}