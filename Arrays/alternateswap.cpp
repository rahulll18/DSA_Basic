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

void swapalternate(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int roll[5] = {2, 5, 6, 88, 102};

    int num[6] = {2, 4, 6, 8, 10, 12};

    swapalternate(roll, 5);
    printarray(roll, 5);

    swapalternate(num, 6);
    printarray(num, 6);
}