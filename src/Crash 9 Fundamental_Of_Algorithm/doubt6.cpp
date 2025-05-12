#include <iostream>
using namespace std;

int main(){
    int i; 
    for(i = 65 ; i <= 122 ;i++){
        if (( i >= 65 && i <= 90 ) ||(i >= 97 && i <= 122)){
            cout << i << " "<< (char)i<< endl;
        }
    }
    return 0;
}


// doubt 

//  int i; 
//     for(i = 65 ; i <= 122 ;i++){
//         if (( i >= 65 && i <= 90 ) &&(i >= 97 && i <= 122)){
//             cout << i << " "<< (char)i<< endl;
//         }
//     }