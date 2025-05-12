#include <iostream>
using namespace std;

int main(){
    char ch = 'A';
    
    int x = (int)ch;
    int y = (char)ch ; // this is taking extra memory in ram  just because i want to typecast in same datatype
    
    // but the output is getten 
    cout << x << " "<< y<< endl;
    return 0;
}


// doubt -> is this right to typecast this 
// char ch = 'A';
//  int y = (char)ch