#include <iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the n : ";
    cin >> n ; 
    int a = 4 ; 
    for ( int i = 1 ; i <= n ; i++){
        cout << a ;
        if ( i !=n) cout << ",";
        a += 3 ; 
    }
    return 0;
}


// doubt -> what is the output 

// int n ; 
//     cout << "Enter the n : ";
//     cin >> n ; 
//     int a = 4 ; 
//     for ( int i = 1 ; i <= n ; i++){
//         cout << a ;
//         if ( i !=n) cout << ",";
//         a += 3 ; 
//     }