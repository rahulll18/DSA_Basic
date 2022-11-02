//Pow(a,b)
#include<iostream>
using namespace std;

int main(){
int a,b;
cin>>a>>b;

int power=1;

for (int i = 1; i <= b; i++)
{
    power=power*a;           //Power=1   1*2=2     2*2=4   2*2=8
}

cout<<"My ans is :"<<power;



}