#include <iostream>
using namespace std;

int main(){
    int n = 9874, lastdigit = 0 , r = 0 ;
    while(n > 0 ){
        lastdigit = n % 10 ;
        r *= 10;
        r += lastdigit;
        n /= 10 ;
    }

    cout <<"Reverse : " <<r<< endl;
    return 0;
}