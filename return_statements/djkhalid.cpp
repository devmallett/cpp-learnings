#include <iostream>

using namespace std;

string say(string phrase){
    return phrase;
}


string whatsYourPod(string podName){
    return podName;
}


int main(){

   string newPhrase = say("Lets goooooo");

   string myFavPod = whatsYourPod("NEW RORY AND MAL");


    cout << "Whats your favorite podcast?" << endl;

    cout << "My favorite pod is "<< myFavPod;


   

    return 0;
}