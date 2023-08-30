#include <iostream>
using namespace std;
char toUppercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'a' + 'A';
        return temp;
    }
}
char toLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkpalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (toLowercase(name[s]) != toLowercase(name[e]))
        {
            return 0;
        }
        else
        { //(name[s] == name[e]
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[10];

    cout << "Enter Your Name :- " << endl;
    cin >> name;

    // name[2] = '\0';    // " r a \0 u l \0"

    cout << "Your Name is :- " << name << endl;

    int len = getlength(name);
    cout << "Length of the string is :- " << len << endl;

    reverse(name, len);
    cout << "Reverse of string is " << name << endl;

    cout << "palindrome or not " << checkpalindrome(name, len) << endl;

    cout << toLowercase('h') << endl;
    cout << toLowercase('H') << endl;
}