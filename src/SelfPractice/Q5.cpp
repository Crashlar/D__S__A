#include <iostream>
using namespace std;

int SumArray(int arr[] , int n  ){
    if ( n <= 0 ) return 0 ; 
    return (SumArray(arr , n -1 ) + arr[n-1]);
}

int main(){
    int arr[] = {1 , 2 , 3 , 4, 5, 6};

    cout << SumArray(arr , sizeof(arr)/sizeof(arr[0]));
}

// Sum of array using recursion 