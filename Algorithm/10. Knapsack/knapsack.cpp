#include<bits/stdc++.h>
using namespace std;
 int value[1005], weight[1005];

 int knapsack(int i, int max_weigth)
 {  
    if(i<0 || max_weigth <= 0) 
      return 0; 
      
    if(weight[i] <= max_weigth)
    { 
         // 2 option
         // 1. bag e rakhbo 2. bag e rakhte parbo nh
    int option1 = knapsack(i-1, max_weigth - weight[i])  + value[i] ;
    int option2 = knapsack(i-1, max_weigth);
    return max(option1,option2);

    }
    else
    {
        // option 1
        // bag e rakhte parbo nh .
        return knapsack(i-1,max_weigth);

    }

 }

int main()
{
    int n, max_weight;
    cin >> n ;
   
    for(int i=0;i<n;i++)
     cin >> value[i];
     for(int i =0;i<n;i++)
       cin >> weight[i];
     cin >> max_weight;
        cout << knapsack(n-1,max_weight) <<endl;
        

    return 0;
}