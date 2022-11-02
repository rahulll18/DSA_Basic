#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout << num << endl;
    cout << "address of num is " << &num << endl;       //address of opereator

    int *ptr = &num;
    cout << *ptr << endl;
    cout << ptr << endl;

    int i = 22;
    int *p1 = 0;
    p1 = &i;

    cout << "Before " << *p1 << endl;
    (*p1)++;
    cout << "After " << *p1 << endl;

    cout << "Size of i" << sizeof(i) << endl;
    cout << "Size of p1" << sizeof(*p1) << endl;

}