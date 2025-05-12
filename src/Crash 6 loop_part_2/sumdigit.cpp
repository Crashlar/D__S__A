#include <iostream>
using namespace std;

int main()
{
    int sum = 0 ;
    int num = 34567;

    while (num > 0)
    {
        int mudulus = num % 10 ; 
        num = num / 10;
        sum += mudulus;
    }

    cout << " Total sum of digits : " << sum << endl;

    return 0;
}