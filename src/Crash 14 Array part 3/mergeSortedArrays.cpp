#include <iostream>
#include <vector>
using namespace std;

// void merge(vector<int>& arr1 , vector<int> & arr2 , vector<int>& v3){

vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    // this func is usable for vector only
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m + n);
    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // result
    while (i <= n - 1 && j <= m - 1)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
        }
        else
        {
            res[k] = arr2[j];
            j++;
        }
        k++;
    }
    if (i == n)
    {
        // arr1 of all element is used
        while (j <= m - 1)
        {
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    if (j == m)
    {
        // arr2 all elements are used
        while (i <= n - 1)
        {
            res[k] = arr1[i];
            k++;
            i++;
        }
    }

    return res;
}

int main()

{
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    // print array 1
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    // call the function
    vector<int> v = merge(arr1, arr2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
