#include <iostream>
using namespace std;

int main(){
    int count ;
    cout << "enter the terms: ";
    cin >> count ;
    int sum = 0 ; 
    // for (int i = 1; i <= count; i++)
    // {
    //     if (i % 2 == 0 ) sum -= i ; 
    //     else sum += i ; 
        
    // }
    // time complexity in worst case

    if (count % 2 == 0 ) 
    // pair ka sum -1 hoga 
        sum = - count /2;
    else sum = - count/2 + count; 

    cout << sum << endl ; 
    return 0;
}