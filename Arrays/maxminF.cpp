#include <iostream>
using namespace std;

int getmin(int arr[], int size)
{
    int min;
    min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int getmax(int arr[], int size)
{
    int max;
    max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Maximum No. is" << getmax(arr, n) << endl;
    cout << "Minimum No. is" << getmin(arr, n) << endl;
}