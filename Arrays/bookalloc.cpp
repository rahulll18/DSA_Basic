#include <iostream>
using namespace std;

bool ispossiblesoln(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = 0;
            pagesum += arr[i];
        }
    }
    return true;
}

int bookallo(int arr[], int n, int m)
{
    int s = 0;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int e = sum;

    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (ispossiblesoln(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << " Enter the no of the books" << endl;
    cin >> n;

    int m;
    cin >> m;

    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans1 = bookallo(arr, n, m);
    cout << "Minimum no of pages allocated is" << ans1;
}