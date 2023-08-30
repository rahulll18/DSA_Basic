#include <iostream>
using namespace std;

//Number is Prime or not
// Time complexity is : - O(n)   
bool isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)   // n-2 comparision.
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

    if (isPrime(n))
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }
}