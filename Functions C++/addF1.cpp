#include <iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}

int Add(int num1, int num2)
{
    
    print(num1);
    print(num2);

    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a = 55;
    int b = 55;

    cout << Add(a, b) << endl;
}