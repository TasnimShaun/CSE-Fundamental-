#include<iostream>
using namespace std;
int main ()
{
int x;
char a;
char c; // for typecasting
double b;
int z;
cin >> x;
cin >> a;
cin >> b;
cin >> c;
cin >> z;
int ascii = a;
cout << x << endl;
cout << ascii << endl; // print ascii value
cout << b << endl;
cout << (int)c << endl; // typecasting
cout << (char)z << endl; // typecasting
return 0;
}
