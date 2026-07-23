#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool make_it(int n, int target)
{
  if( n == target)
     return true;
  if( n > target)
     return false;
  if( dp[n] != -1)
     return dp[n];
  return dp[n]= make_it(n+3,target) || make_it(n+4,target);
}

int main()
{
  
      int n;
      cin >> n;
         memset(dp,-1,sizeof(dp));
            if(make_it(0,n))
             cout << "YES" <<endl;
             else
             cout << "NO" <<endl;
         
         
    
    return 0;
}
