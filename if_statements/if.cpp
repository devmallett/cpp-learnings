#include <iostream>

using namespace std;

int main(){


    bool isMale = false;
    // bool isMale = true;

    // bool isTall = true;
    bool isTall = false;

    //And

    // if( isMale && isTall){

    //     cout << "You are a male";

    // } else {
    //     cout << "You are not male";
    // }
    

    //Or
      if( isMale && isTall){

        cout << "You are a male";

    } else if (isMale && !isTall) {

        cout << "This dude is not tall";

    }else {
        cout << "You are not male";
    }


    return 0;
}