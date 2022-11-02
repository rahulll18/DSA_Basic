//Inverted Half Pyramid

#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

//Row n to 1    Col =  Row to 1
for (int i = n; i >=1; i--)
{
    for (int j=1; j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

}