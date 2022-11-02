#include<iostream>
using namespace std;

int main(){
    int i=1; //0
    int j=2; //1
    int k=3;  //2 

    int m = i-- - j-- - k--;
           //1    //2   //3

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<m<<endl;

}