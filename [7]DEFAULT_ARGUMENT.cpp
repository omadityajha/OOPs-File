// WAP to illustrate the use of default arguments.

//                    Author: OMADITYA JHA

#include <iostream>
using namespace std;
int main(){
    float amount;
    float value(float p,  int n, float r=0.15);   // Prototype
    void printline(char ch='*', int len=40);     // Prototype
    printline();                                // Default arguments
    amount = value(5000.0, 5);                 // Default for 3rd argument
    cout << "\n Final Value : " << amount << "\n";

    amount = value(10000.0, 5, 0.30);        // explicitly passing all arguments 
    
    cout<<"\n Final Value : "<<amount<<"\n";

    printline('-');                       // Using default value for 2nd argument

    return 0;
}

float value(float p,  int n, float r){
    int year = 1;
    float sum = p;
    while(year <= n){
        sum = sum * (1 + r);
        year++;
    }
    return sum;

}

void printline(char ch, int len){
    for (int i = 1; i <= len; i++)
        cout << ch;
    cout << endl;
}