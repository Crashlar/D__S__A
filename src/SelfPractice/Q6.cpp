
// Write a recursive function to calculate the sum of digits of a given positive integer

#include <iostream>
using namespace std;

int sum( int total , int n){
    if ( n == 0 ) return total ; 
    return n%10 + sum(total , n /10); 
}
int main(){
    int num =  123456789;
    cout << sum (0 , num );
}