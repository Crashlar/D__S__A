#include <iostream>
using namespace std;

void swap(int &a , int &b ){
    int temp = a ; 
    a = b ; 
    b = temp ;
    return; 
}

int main(){
    int a = 12 , b = 445; 
    swap(a , b  );
    cout << a << " "<< b ; 
    return 0;
}