#include <iostream>
using namespace std;

int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrint(i))
        {
            count++;
        }
    }
    return count;
}

bool isPrint(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++) // n-2 comparision.
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    cout << "Total Prime numbers are : -" << countPrimes(n);
}