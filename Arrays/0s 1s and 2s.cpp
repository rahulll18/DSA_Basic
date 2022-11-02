#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    /*
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    */

    int zeroes = 0;
    int ones = 0;
    int twos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroes++;
        }
        else if (arr[i] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }

    for (int i = 0; i < zeroes; i++)
    {
        arr[i] = 0;
    }

    for (int i = zeroes; i < (zeroes + ones); i++)
    {
        arr[i] = 1;
    }

    for (int i = zeroes + ones; i < zeroes + ones+twos; i++)
    {
        arr[i] = 2;
    }
}

void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int nums[7] = {0, 1, 0, 1, 2, 0, 2};

    sort(nums, 7);
    printarray(nums, 7);
}