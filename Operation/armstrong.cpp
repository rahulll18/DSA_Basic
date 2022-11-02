#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int originalNUm = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3); // Sum=Sum + pow(lastDigit,3)
        n = n / 10;
    }
    if (sum == originalNUm)
    {
        cout << "Number is Armstrong" << endl;
    }
    else
    {
        cout << "Number is Non-Armstrong";
    }
}