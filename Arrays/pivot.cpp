#include <iostream>
using namespace std;

int getpivate(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = start + 1;
        }
        else
        {
            end = mid; // else (arr[mid] < arr[0])
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Pivot Element is" << getpivate(arr, n);
}