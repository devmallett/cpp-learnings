#include <iostream>

using namespace std;

class Student {
    public: 
    string name;
    string major;
    double gpa;
    Student(string aName ,string aMajor ,double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors(){
        if (gpa >= 2.0){
            // return name + " has honors";
            return true;
        }
        // return name + " doesn't have honors";
        return false;
    }
};

int main() {

    Student student1("Dev" ,"Business" ,2.4);
    Student student2("Pam" ,"Art" ,3.6);

    cout << student1.hasHonors() << endl;;
    cout << student2.hasHonors();

    return 0;
}