// Time Complexity :- Worst Case O(n^2)  || Best Case O(n^2)
// Spzce Complexity :- O(1)
#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionarray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}

int main()
{
    int arr[5] = {7, 1, 4, 3, 9};

    selectionarray(arr, 5);
    printarray(arr, 5);
}