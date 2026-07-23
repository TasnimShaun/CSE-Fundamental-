#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
   if(n<2)
     return n;
  return fibo(n-1) + fibo(n-2);

}
int main()
{ 
    int x;
    cin >> x;
     int y = fibo(x);
    cout << y;
    return 0;
    // complexity - 2^N
}