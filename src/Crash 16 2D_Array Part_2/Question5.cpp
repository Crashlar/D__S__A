#include<iostream>
#include<vector>


int main(){
    int a[][2] = {{1,2},{3,4}};
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            std::cout << a[i][j];
    return 0;
}

// Pridict output
