#include<iostream>
using namespace std;

void count(int arr[] , int n){
    int count0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
           count0++;
        }
        
    }

    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }

    for (int i = count0; i < n; i++)
    {
        arr[i] = 1;
    }
    
    
}

void prinarray(int arr[] , int n)
{
   for (int i = 0; i < n; i++)
   {
     cout<< arr[i];
   }
    
}


int main(){
    int n;
    cout << "Enter the size of the array" ;
    cin >> n;


    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    count(arr,n);
    cout<<"after Sorting";
    prinarray(arr , n);
    
    
}