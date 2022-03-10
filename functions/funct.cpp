#include <iostream>

using namespace std;

//Function Stub (function signature)

void sayHi(string name ,int age);


int main() {
    
    cout << "Top" << endl;
    sayHi("Dev" ,27);
    sayHi("Tom" ,45);
    sayHi("Steve" ,19);

    cout << "Bottom" << endl;
    return 0;
}


void sayHi(string name ,int age) {
    cout << "Hello " << name  << " you are " << age << endl;;
}