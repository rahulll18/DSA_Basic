#include<iostream>
using namespace std;

int main(){
    int savings;
    cin>>savings;

    if (savings>5000)
    {
        if (savings>10000)
        {
            cout<<"Roadtrip with surekha\n";
        }
        else
        {
            cout<<"shopping with surekha\n";
        }
        
        
    }
    else if (savings>2000)
    {
        cout<<"Neha\n";
    }
    else
    {
        cout<<"Friends\n";
    }
    return 0;
    
    
    
} 