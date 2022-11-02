#include<iostream>
using namespace std;

int main(){
char buttons;
cout<<"Input a character:";
cin>>buttons;

switch (buttons)
{
case 'a':
cout<<"hello";
break;

case 'b':
cout<<"holo";
break;

case 'c':
cout<<"namaste";
break;

case 'd':
cout<<"ciao";
break;

default:
cout<<"I don't wanna learn!";
break;
}

}