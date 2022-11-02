#include<iostream>
using namespace std;

int Add(int num1 , int num2){           // Formal Parameters  Taking values from num1 ana num2
    int Sum= num1 + num2;
    return Sum;
}



int main(){

int a;
int b;
cin>>a;
cin>>b;

cout<<"The Sum is:"<<Add(a,b);           // Actual Parameters a and b

    
}