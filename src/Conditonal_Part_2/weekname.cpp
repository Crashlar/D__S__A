#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"ENter the n : ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Monday";
        break;
    case 2: 
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
        // as so on 
        ;

        
    default:
        break;
    }
    return 0;
}