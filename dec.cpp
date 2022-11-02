#include<iostream>
using namespace std;

int main(){
int i=1; //3
int j=2; //4
int k;   

k= i + j + i++ + j++ + ++i + ++j;
// 1   //2  //1  //2  //3    //4  
cout<<k<<endl;

}