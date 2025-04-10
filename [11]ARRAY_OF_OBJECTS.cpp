// Create array of objects using c++.

//                     Author: OMADITYA JHA 

#include <iostream>                             
using namespace std;     
class Student{ 
    public:
    int roll_no;
    int age;      
};  
int main(){     
    Student s[3]; // Array of objects of class Student    
    s[0].roll_no = 101; // Set roll number for s1
    s[1].roll_no = 102; // Set roll number for s2
    s[2].roll_no = 103; // Set roll number for s3    
    s[0].age = 20; // Set age for s1
    s[1].age = 21; // Set age for s2
    s[2].age = 22; // Set age for s3    
    for(int i = 0; i < 3; i++){ // Loop to print roll number and age of each student    
        cout << "Roll number of student " << i + 1 << " is: " << s[i].roll_no << endl; // Print roll number
        cout << "Age of student " << i + 1 << " is: " << s[i].age << endl; // Print age
    }
    return 0;
}