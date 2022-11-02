#include <iostream>
using namespace std;

void gettarget(int arr[], int n, int target)
{
  
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout<<arr[i]<< " "<<arr[j]<<" "<<arr[k];
                }
            }
        }
    }

    
}

int main()
{

    int arr[5] = {10, 5, 5, 5, 2};

    int target = 12;

    gettarget(arr,5,12);
}