#include <iostream>
using namespace std;
bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << "The Number is Even" << endl;
    }
    else
    {
        cout << "The Number is odd" << endl;
    }
}