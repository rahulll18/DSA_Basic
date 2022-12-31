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
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else  //arr[i] == 2
        {
            count2++;
        }
        
    }

    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }

    for (int i = count0; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++)
    {
        arr[i] = 2;
    }
}

int main()
{
    int arr[11] = {0,2,1,2,0,1,2,2,1,1,0};

    sort(arr, 11);
    printarray(arr, 11);
}