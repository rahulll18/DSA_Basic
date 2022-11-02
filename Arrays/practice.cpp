#include<iostream>
using namespace std;

void printarray(int arr[],int size){

for (int i = 0; i <size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"Everything is DONE"<<endl;

}

int main(){

int arr[2]={2,4};
int n=2;
printarray(arr,n);

int third[3]={2,4};
 n=3;
printarray(third,n);

int tenth[10]={222};
 n=10;
printarray(tenth,n);




}
