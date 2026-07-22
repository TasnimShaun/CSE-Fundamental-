#include<bits/stdc++.h>
using namespace std;
int parent[1005];
int group_size[1005];

int find(int node)  
 {
    
   if(parent[node] == -1) 
        return node;
       int leader = find(parent[node]);
       parent[node] = leader;
        return leader; 
 }
void dsu_union(int node1,int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(leader1 == leader2)
     return;
    if(group_size[leader1] >= group_size[leader2])
    {
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
       
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
       
    }
    
}
int main()
{
    int n ;
    cin >> n;
    for(int i=1;i<=n;i++)
       {
         parent[i] = -1;
         group_size[i] =1;
       }
       vector<pair<int,int>> remv;
       vector<pair<int,int>> create;
       for(int i=0;i<n-1;i++)
       {
         int a,b;
         cin >> a >>b;
         int leaderA = find(a);
         int leaderB = find(b);
         if(leaderA == leaderB)
          remv.push_back({a,b});

         else
          dsu_union(a,b);
       }
       for(int i=2;i<=n;i++)
       {
          int leader_1 = find(1);
          int leader_2 = find(i);
          if(leader_1 != leader_2)
          {
             create.push_back({1,i});
             dsu_union(1,i);
          }
       }
       
       cout << remv.size() << endl;
       for(int i=0;i<remv.size();i++)
       cout << remv[i].first << " " << remv[i].second << " " << create[i].first <<" " << create[i].second <<endl;

    
    return 0;
}