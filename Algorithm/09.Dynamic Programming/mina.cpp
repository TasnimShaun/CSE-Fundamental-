#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
     while(t--)
     {
        int n;
        cin >>n;
         vector<int> arr(n);
          for(int i =0;i<n;i++)
           cin >> arr[i];
            sort(arr.begin(),arr.end(),greater<int>());
            int mina =0;
            int moni =0;
            for(int i=0;i<n;i++)
            {
                if(mina< moni){
                 mina +=arr[i];
                }
                else{
                    moni+= arr[i];
                }

            }
             int minimum_diff = abs(mina-moni);
             cout << minimum_diff << endl;


     }
    return 0;
}