#include <iostream>

using namespace std;


int getMax(int num1 ,int num2){

    int result;

    if ( num1 > num2 ){

        result = num1;

    } else if (num2 > num1){
        result = num2;
    }

    return result;

}


int main(){

    cout << getMax(4 ,6);

    return 0;
}