#include<bits/stdc++.h>
using namespace std;
long long int dynamic_arr[1005];
int fibo( long long int n)
{
   if(n<2)
     return n;
     if(dynamic_arr[n] != -1)
      return dynamic_arr[n];

  dynamic_arr[n] = fibo(n-1) + fibo(n-2);
   return dynamic_arr[n];

}
int main()
{   
    memset(dynamic_arr,-1,sizeof(dynamic_arr));
    long long int x;
    cin >> x;
    long long int y = fibo(x);
    cout << y;
    return 0;
    // complexity - O(N)
}