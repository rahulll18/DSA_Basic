#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        int value = 1;
        while (j <= i - 1)
        {
            cout << value;
            value--;
            j++;
        }

        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            value--;
            j++;
        }
    }

    cout << endl;
    i++;
}
