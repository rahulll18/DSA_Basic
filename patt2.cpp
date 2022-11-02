#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << counter;
            counter++;
            j++;
        }
        cout << endl;
        i++;
    }
}