#include <iostream>
using namespace std;

int binarysearch(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        { //(square > n)
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int morePrecison(int n , int precision , int tempSol)
{
    int factor = 1;
    int ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans ; j*j<n ; j = j + factor)
        {
            ans = j;
        }
        
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;

    cin >> n;


    int tempSol = binarysearch(n);

    cout << "Answer is MorePrecision : " << morePrecison(n , 3 , tempSol);
}