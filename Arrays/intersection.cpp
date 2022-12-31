#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            return arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else //  arr1[i] > arr2[j]
        {
            j++;
        }
    }
}

int main()
{

    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};

    cout << "Common Element in an array is :" << intersection(arr1, 6, arr2, 4);
}