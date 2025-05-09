#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter the Marks : ";
    cin >> marks;
    // condition ? true : false

    marks > 33 ? cout << "Pass" : cout << "Fail";
    return 0;
}