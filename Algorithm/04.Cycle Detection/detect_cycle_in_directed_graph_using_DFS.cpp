#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
bool cycle;
bool path_vis[105];
void dfs(int src)
{
        vis[src] = true;
            for(int child : adj_list[src])
            {
                if(vis[child] && path_vis[child])
                cycle = true;
                if(!vis[child])
                {
                   dfs(child);
                }
            }
            path_vis[src] = false;
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
      
    }
    memset(vis,false,sizeof(vis));
    memset(path_vis,false,sizeof(path_vis));
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
    cout << " No Cycle Detected";
    return 0;
}