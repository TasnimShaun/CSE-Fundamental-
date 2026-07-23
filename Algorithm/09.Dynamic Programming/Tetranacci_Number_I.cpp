#include<bits/stdc++.h>
using namespace std;
  long long int dynamic_arr[40];
long long int tetranacci( int n)
{
   if(n == 0)
     return 0;
     if( n == 1 || n == 2)
     return 1;
     if( n == 3)
     return 2;

     if(dynamic_arr[n] != -1)
      return dynamic_arr[n];

  dynamic_arr[n] = tetranacci(n-1) + tetranacci(n-2)+  tetranacci(n-3) + tetranacci(n-4) ;
   return dynamic_arr[n];

}
int main()
{   
    memset(dynamic_arr,-1,sizeof(dynamic_arr));
    long long int x;
    cin >> x;
    long long int y = tetranacci(x);
    cout << y;
    return 0;
    
}