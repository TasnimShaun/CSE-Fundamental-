#include<bits/stdc++.h>
using namespace std;

void fun(int* p)
{
    int y = 200;
    p =NULL;
    //cout << " in fun: " << (int)&p << endl;
}
int main()
{
   int x =50;
   int* p =&x;
   fun(p);
   cout << " in main: " << *p << endl;
   // cout << *p << endl;
    return 0;
}