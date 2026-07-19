#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
bool cycle;
int parent[105];
void bfs(int src)
{
       queue<int> q;
        q.push(src);
        vis[src] = true;
        while(!q.empty())
        {
            int par = q.front();
            q.pop();
            for(int child : adj_list[par])
            {
                if(vis[child] && parent[par] != child)
                cycle = true;
                if(!vis[child])
                {
                    q.push(child);
                    vis[child] = true;
                    parent[child] = par;
                }
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
            bfs(i);
        }
    }
    if(cycle)
    cout <<"Cycle Detected";
    else 
    cout << " No Cycle Detected";
    return 0;
}