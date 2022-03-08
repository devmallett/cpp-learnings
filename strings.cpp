#include <iostream>

using namespace std;

int main() 
{

    string phrase = "this is a phrase";
    cout << phrase.length();
    phrase[0] = 'd';
    cout << phrase.find("phrase", 0);
    

    // string phrasesub;
    // phrasesub = phrase.substr(8, 3);
    // cout << phrasesub;

    
    return 0;
}