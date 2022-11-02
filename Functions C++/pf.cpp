#include <iostream>
using namespace std;

int power(int a, int b)
{
    int answer = 1;

    for (int i = 1; i <= b; i++)
    {
        answer *= a;
    }
    return answer;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << "This is the ans:" << ans;
}