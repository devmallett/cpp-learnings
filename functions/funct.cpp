#include <iostream>

using namespace std;


void sayHi(string name) {
    cout << "Hello " << name  << endl;;
}

int main() {
    
    cout << "Top" << endl;
    sayHi("Dev");

    cout << "Bottom" << endl;
    return 0;
}