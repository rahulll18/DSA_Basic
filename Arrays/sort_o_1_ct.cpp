#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort(int arr[], int n)
{
    int count0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
    }

    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }

    for (int i = count0; i < n; i++)
    {
        arr[i] = 1;
    }
}

int main()
{
    int arr[6] = {0, 1, 0, 1, 1, 0};

    sort(arr, 6);
    printarray(arr, 6);
}