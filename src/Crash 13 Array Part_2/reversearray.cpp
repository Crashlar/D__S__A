#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>&a){
    for (int i = 0; i <a.size(); i++)
    {
        cout << a[i]<< " ";
    }
    cout << endl;
    
}

void reversePart(int i , int j , vector<int>&v){
    while (i<= j )
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return ; 
}
void reverse(vector<int>&v){
    int i = 0 ; 
    int j = v.size() -1 ;
    while (i<= j )
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return ;
}
int main(){
    vector<int>v;
    v.push_back(12);
    v.push_back(8);
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(12);
    v.push_back(1);

    display(v);

// reverse

    // int i = 0 ;
    // int j = v.size() -1 ;
//    while (i <= j )
//    {
//     int temp = v[i];
//     v[i] = v[j];
//     v[j] = temp;
//     i++;
//     j--; 
//    }


    // for(int i = 0 , j = v.size() -1 ; i <= j ; i++ , j++){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--; 
    // }
    // display(v);

    reversePart(0 , 4 , v);
    display(v);
    reverse(v);
    display(v);

    return 0;
}