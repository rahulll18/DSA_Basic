#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> freq;
    for (auto x : arr)
    {
        freq[x]++;
    }
    unordered_set<int, int> s;
    for (auto x : freq)
    {
        s.insert(x.second);
    }
    if (freq.size() == s.size())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(3);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    uniqueOccurrences(arr);
       

    
}