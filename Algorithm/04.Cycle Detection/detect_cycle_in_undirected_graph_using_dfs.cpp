#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
bool cycle;
int parent[105];
void dfs(int src)
{
        vis[src] = true;
            for(int child : adj_list[src])
            {
                if(vis[child] && parent[src] != child)
                cycle = true;
                if(!vis[child])
                {
                    parent[child] = src;
                    dfs(child);
                }
            }
        }

int main()
{
    int N,E;
    cin >> N >> E;
    while(E--)
    {
       int a,b ;
       cin >> a >> b;
       adj_list[a].push_back(b);
       adj_list[b].push_back(a); 
    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    for(int i = 0; i<N; i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(cycle)
    cout <<"Cycle Detected";
    else 
    cout <<"No Cycle Detected";
    return 0;
}