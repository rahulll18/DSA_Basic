#include<iostream>
using namespace std;

int getmaxoccur( int arr[] , int n){
    int maxcount = 0;
    int element_having_max_freq;

    for (int i = 0; i < n; i++)
    {
       int count = 0;
       for (int j = 0; j < n; i++)
       {
        if (arr[i] == arr[j])
        {
            count++;
        }

        if (maxcount < count)
        {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
        
         
       }
       
    }
    return element_having_max_freq;
}

int main(){

int arr[5];

for (int i = 0; i < 5; i++)
{
    cin >> arr[i];
}

cout <<"Maximum Occuring element is " << getmaxoccur(arr , 5);


}