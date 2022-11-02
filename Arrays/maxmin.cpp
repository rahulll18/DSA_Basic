#include <iostream>
using namespace std;

// Basic Game
int main()
{

    int n;
    cin >> n; // Taking size from the user

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Taking Array from the user
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // Basic Game Over
    // Main Game start
    int max;
    int min;

    max = INT_MIN;
    min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Maximum No. is" << max << endl;
    cout << "Minimum No. is" << min << endl;
}
// Main Game over