#include <iostream>
using namespace std;

int getsum(int Age[], int Size)
{
    int sum = 0;

    for (int i = 0; i < Size; i++)               //{1,2,3,4,5}
    {
        sum = sum + Age[i];                    //0+1=1  //sum=1       //1+2=3    sum=3    //3+3=6   sum=6   //6+4=10   //10+5=15
    }
                                               
    return sum; 
}

int main()
{
    int n;
    cin >> n;

    int Age[n];

    for (int i = 0; i < n; i++)
    {
        cin >> Age[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << Age[i]<<" ";
    }

    cout << "The Sum Of the Element in Array is" << getsum(Age, n) << endl;
}