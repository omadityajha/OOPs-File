// WAP to check whether a number is prime or not.

//                    Author: OMADITYA JHA

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "The number is not prime." << endl;
    }
    else
    {
        cout << "The number is prime." << endl;
    }
    return 0;
};