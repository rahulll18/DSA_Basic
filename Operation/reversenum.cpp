#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

int reverse=0;
while (n>0)
{
    int lastDigit=n%10;          //Eg:  543  last digit=3 
    reverse=reverse*10+ lastDigit;            //reverse =3*10 +  4     //reverse   34*10 + 5
    n=n/10;                                  
}

cout<<reverse<<endl;



}