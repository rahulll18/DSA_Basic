#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4] , int target , int i , int j)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
            
        }
        cout << endl;
    }
    return 0;
}
int main()
{

    int arr[3][4] = {{1,11,111,1111} ,{2,22,222,2222},{3,33,333,3333}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int target;
    cout << "Search This Element : ";
    cin >> target;

    if (isPresent(arr , target , 3 , 4))
    {
        cout << "Element is Found" << endl;
    }
    else
    {
        cout << "Element is not  Found" << endl;
    }
}