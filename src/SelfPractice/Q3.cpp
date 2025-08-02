#include <iostream>
using namespace std;

void reversePrint(int n ){
    if ( n == 0 ) return ; 

    reversePrint(n-1);
    cout << n << " ";
}

int main(){
    int n = 10 ; 

    reversePrint(n);
}




// Print 1 to n using recursion 