
#include <iostream>
using namespace std;

int main(){
    char ch ;
    cout << "Enter the character : ";
    cin >> ch ;
    // cout << ch << endl;
    // cout << (int)ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90 

    int ascii = (int)ch;
    if (ascii >= 97 && ascii <= 122){
        cout << "The character is lower case";
    }

    if (ascii >= 65 && ascii <= 90){
        cout << "The character is upper case";
    }
     
    return 0;
}