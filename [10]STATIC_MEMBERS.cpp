// Implement the concept of static members in a class.

//                     Author: OMADITYA JHA 

#include <iostream> 
using namespace std;     

class Student{
    public:
        static int count;           // Static member variable
        int roll_no;               // Non-static member variable
        void set_roll_no(int a){ // Member function to set roll number and increment count
            roll_no = a; count++;
            cout<<"Current no of students: "<<count<<"\n";
        }         
};
// pg no -107 why does the count in output of program 5.5 starts from 2 instead of 1
int Student::count; // Definition of static member variable

int main(){     
    Student s1, s2, s3; // Objects of class Student
    s1.set_roll_no(101); // Set roll number for s1
    s2.set_roll_no(102); // Set roll number for s2
    s3.set_roll_no(103); // Set roll number for s3    
    cout << "Total number of students: " << Student::count << endl; // Access static member variable using scope resolution operator
}