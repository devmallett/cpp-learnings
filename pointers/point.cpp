#include <iostream>

using namespace std;


/* 
cout << "Age: " << &age << endl;
cout << "Name: " << &name << endl;
cout << "GPA: " << &gpa << endl;

*/

int main() {

    int age = 19;
    double gpa = 2.7;
    string name= "Dev";

    cout << "Age: " << &age << endl;
    cout << "Name: " << &name << endl;
    cout << "GPA: " << &gpa << endl;
    
    return 0;
}