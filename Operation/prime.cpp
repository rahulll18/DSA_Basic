#include<iostream>
using namespace std;

int main(){
int n,i;
cin>>n;

for (int i= 2; i<=n; i++)
{
   if (n%i==0)
   {
    cout<<"The Number is not prime"<<endl;
    break;
   }
    
}

if (i==n)
{
    cout<<"The Number is prime"<<endl;
}

return 0;

}