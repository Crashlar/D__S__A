#include <iostream>
using namespace std;

int main(){
    int count ;
    cout << "Enter the count term : ";
    cin >> count ;  
    int num = 1 ; 
    for (int i = 1; i <= count; i++)
    {
        for (int j= 1; j <= i; j++)
        {
            cout << num << " ";
            num++;    
        }
        
        cout << endl;
    }
    return 0;
}