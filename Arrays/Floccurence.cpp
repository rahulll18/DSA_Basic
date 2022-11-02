#include <iostream>
using namespace std;
int rightoccur(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;

    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start= mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}

int leftoccur(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;

    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{

    int arr[7] = {1, 2, 3, 3, 3, 3, 5};

    cout << "The left occurence of 3 at index" << leftoccur(arr, 7, 3) << endl;
    cout << "The right occurence of 3 at index" << rightoccur(arr, 7, 3) << endl;
}