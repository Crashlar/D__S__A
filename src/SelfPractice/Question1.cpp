#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main(){
    vector<int> arr = {1 , 2, 3 ,4};

    bool flag = false;

    int num ; 
    cout << "Enter the number to fnd the closest : ";
    cin >> num ; 
    
    for(int i = 0 ; i < arr.size(); i++){
        // checking the nearest number 
        if (num == arr[i]){
            cout << arr[i-1] << " and " << arr[i+1];
        }
    }
}
// Closest number 