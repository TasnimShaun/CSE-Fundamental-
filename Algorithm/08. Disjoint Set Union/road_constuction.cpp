#include<bits/stdc++.h>
using namespace std;
int parent[100005];
int group_size[100005];
int component, mx;
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
        mx = max(mx,group_size[leader1]);
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        mx = max(mx,group_size[leader2]);
    }
    component--;
}
int main()
{
    int n, e;
     cin >> n >> e;
     component = n;
     mx = 1;
    for(int i=1;i<=n;i++)
    {
    parent[i] =-1;
    group_size[i] =1;
    }
     while(e--)
     {
        int a, b;
         cin >> a >> b;
         dsu_union(a,b);
          cout << component <<" " << mx << endl;

     }
    
    return 0;
}