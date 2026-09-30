#include<iostream>
using namespace std ;
int main(){
    int x ;
    cin >> x;
cin.ignore(); // if i input another type varible,
// char s[100];
char s[100];
cin.getline(s,100);
cout << x << endl << s << endl;
return 0;
}