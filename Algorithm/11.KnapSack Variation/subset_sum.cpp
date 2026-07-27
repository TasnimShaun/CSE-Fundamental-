#include<bits/stdc++.h>
using namespace std;
int arr[1005];

bool subset_sum(int i, int sum) // TIME COMPLEXITY O(2^N)
{
    if(i<0)
    {
        if(sum == 0)
         return true;
         else
          return false;
    }
    if(arr[i]<= sum)
     {
        bool option1 = subset_sum(i-1,sum - arr[i]);
        bool option2 = subset_sum(i-1,sum);
         return (option1 || option2);
     }
    else
    {
        return  subset_sum(i-1,sum);
    }
   
}
int main()
{
    int n;
    cin >> n;
    
     for(int i =0;i<n;i++)
     {
         cin >> arr[i];
     }
      int sum;
       cin >> sum;
    if(subset_sum(n-1,sum))
      cout << "YES" << endl;
     else 
     cout << "NO" << endl;

    return 0;
}