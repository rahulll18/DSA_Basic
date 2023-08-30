#include <iostream>
using namespace std;

int largestRowSum(int arr[][4], int row, int col)
{
    int SumIndex;
    int maxSum = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }

        if (maxSum < sum)
        {
            maxSum = sum;
            SumIndex = i;
        }
    }
    cout << "The maximum Sum is : " << maxSum << endl;
    return SumIndex;
}
int main()
{
    int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ansIndex = largestRowSum(arr , 3 , 4);

    cout << " Maximum sum at Index is " << ansIndex;
}
