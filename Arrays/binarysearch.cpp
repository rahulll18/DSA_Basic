#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[6] = {2, 4, 6, 18, 20, 22};

    int index = binarysearch(arr, 6, 22);
    cout << "Index of 6 is" << index;
}