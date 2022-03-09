#include <iostream>

using namespace std;

main (){
    
    string name;
    int age;
    string homeTown;
    string favoriteFood;
    
    cout << "Hello!"; 
    cout << "What is your name?";
    getline(cin ,name);
    cout << "Hello " << name <<"!";
    cout << "Where are you from?";
    getline(cin, homeTown);
    cout << "Awesome ! I've heard it's wonderful there!";
    cout << "How old are you?";
    cin >> age;
    cout << "Awesome! " << age << " is such a great age!!";



    
    return 0;
}