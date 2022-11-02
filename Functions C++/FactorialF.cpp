#include<iostream>
using namespace std;


int fun(int n){
    int factorial=1;
    for (int i = 2; i <=n; i++)     //Fact=1   i=2       fact =1x2=1
    {                               //fact=2    i=3      fact=2x3=6
        factorial=factorial*i;     //fact=6     i=4       Fact=6x4=24
    }                               //Fact=24   i=5        Fact=24x5 =120
    return factorial;
}

int main(){
int n;
cin>>n;

int ans= fun(n);
cout<<ans<<endl;
return 0;

}