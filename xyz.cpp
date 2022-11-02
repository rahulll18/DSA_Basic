#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 6;

    cout << "a & b" << (a & b) << endl;
    cout << "a|b" << (a | b) << endl;
    cout << "~a" << ~a << endl;
    cout << "a^b" << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 7;
    cout<<++i<<endl;  //8   i=8
    cout<<i++<<endl;   //8   i=9
    cout<<i--<<endl;   //9    i=8
    cout<<--i<<endl;    //7  i=7

    a,b=1;
    a=10;
    if (++a)
    {
        cout<<b;
    }
    else
    {
        cout << ++b;
    }

    a=1,b=2;
    if (a-->0 || ++b>2)
    {
       cout<<"stage1 - Inside if";
    }
    else
    {
        cout<<"stage2 - Inside else";
    }
    cout<<a<<" "<<b<<endl;
    
    
}