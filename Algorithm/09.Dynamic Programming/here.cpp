#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<int> arr(n);
     for(int i=0;i<n;i++)
      cin >> arr[i];
       sort(arr.begin(),arr.end(),greater<int>());
       int total_ball =arr[0];
       int previous_bag = arr[0];
       for(int i=0;i<n;i++)
       {
        int current = min(arr[i],previous_bag -1);
         current = max(current,0);
          total_ball += current;
           previous_bag = current;
       }
       cout << total_ball << endl;

       
    return 0;
}