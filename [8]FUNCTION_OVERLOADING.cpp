// WAP to implement function overloading.

//                    Author: OMADITYA JHA

#include <iostream>
using namespace std;

int area(int , int ); // Area of rectangle
int area(int );       // Area of square
float area(float);   // Area of circle

int main() {
    cout<<"Calling the area() function with 2 arguments"<<endl;
    cout<<"Area of rectangle: "<<area(5,10)<<"\n";
    cout<<"Calling the area() function with 1 argument"<<endl;
    cout<<"Area of square: "<<area(5)<<"\n";
    cout<<"Calling the area() function with 1 argument"<<endl;
    cout<<"Area of circle: "<<area(5.0f)<<"\n";  // If 'f' keyword not used with the floating value then it will be considered as double and will throw an  ambiguity error 
    return 0;
}

int area(int len, int breadth) {  // Area of rectangle  
    return len*breadth;
}

int area(int side) {  // Area of square
    return side*side; 
}

float area(float radius) {  // Area of circle
    return 3.14*radius*radius;
}