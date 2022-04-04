#include <iostream>

using namespace std;


/* 
cout << "Age: " << &age << endl;
cout << "Name: " << &name << endl;
cout << "GPA: " << &gpa << endl;

Pointers are just types of information 
*/

int main() {

    int age = 19;
    int *pAge = &age; //pointer variable 
    double gpa = 2.7;
    double *pGpa = &gpa; //stores inside memory address
    string name= "Dev";
    string *pName = &name; //memory address of name variable 

    // cout << pAge;

    //Dereference pointer address 
    cout << *pAge << endl;;

    cout << *&gpa << endl;



    // cout << "Age: " << &age << endl;
    // cout << "Name: " << &name << endl;
    // cout << "GPA: " << &gpa << endl;
    
    return 0;
}