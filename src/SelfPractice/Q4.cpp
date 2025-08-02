#include <iostream>
using namespace std;
void PrintNum(int n ){
    if ( n == 0 ) return ; 

    cout << n<< " ";
    PrintNum(n-1);
}

int main(){
    int n = 10 ; 
    PrintNum(n);
}
// Print n to 1 using recursion 