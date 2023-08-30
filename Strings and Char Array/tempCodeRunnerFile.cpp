#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string replacespace(string s){
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' )
        {
            temp[i] = '@40';
        }
        else{
            temp[i] = s[i];
        }
        
    }
    return temp;
}
int main(){

    string s = "My Name is Khan";

    replacespace(s);
}