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
    memset(parent,-1,sizeof(parent));
    memset(group_size,1,sizeof(group_size));
    int n , e;
    cin >> n >> e;
    int cycle_Edge =0;
    while(e--)
    {
      int a,b; 
      cin >> a >> b;
     
      int leader_A = find(a);
      int leader_B = find(b);

      if(leader_A == leader_B)
       cycle_Edge++;
       else
       dsu_union(a,b);

     }
     cout << cycle_Edge << endl;
     
}
