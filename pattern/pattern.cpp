// Square Pattern
#include<iostream>
using namespace std;

int main()
{
//Basic Data
int row;
int col;
cin>>row;
cin>>col;

for (int i = 1; i <=row; i++)
{
    for (int j = 1; j <=col; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

}