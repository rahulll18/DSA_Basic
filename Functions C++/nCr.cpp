#include <iostream>
using namespace std;

int fact(int n)
{
    int facto = 1;
    for (int i = 2; i <= n; i++)
    {
        facto =facto* i;
    }

    return facto;
}
int ncr(int n, int r)
{
    int nume = fact(n);
    int deno = fact(r)*fact(n - r);

    int ans = nume/deno;

    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "The ans is:" << ncr(n, r) << endl;
}