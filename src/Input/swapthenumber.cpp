#include <iostream>
using namespace std;

int main(){
    float num1 , num2;
    cout << "Enter the num1 : ";
    cin>> num1;
    
    cout << "Enter the num2 : ";
    cin>> num2;

    float temp = num1;
    num1 = num2;
    num2  = temp;
    cout << "after swap "<< endl;
    cout << "num1 : "<< num1 << " & "<< "num2 : "<< num2;
    return 0;
}