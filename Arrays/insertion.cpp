#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else // temp > arr[j]
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {7, 1, 4, 3, 9};

    insertionsort(arr, 5);
    printarray(arr, 5);
}