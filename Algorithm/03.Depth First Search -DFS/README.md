# Depth First Search (DFS)

## 📌 Introduction

Depth First Search (DFS) is a graph traversal algorithm used to explore all the vertices of a graph by going as deep as possible before backtracking.

DFS starts from a source node, visits one of its unvisited adjacent nodes, and continues this process until it reaches a node with no unvisited neighbors. Then it backtracks and explores other paths.

DFS can be implemented using:
- Recursion
- Stack (Iterative approach)

---

## 🚀 Algorithm

1. Start from the source node.
2. Mark the current node as visited.
3. Visit every unvisited adjacent node recursively.
4. Continue until all reachable nodes are visited.

---

## 🧠 Example

Graph:
    1
   / \
  2   3
 /     \
4       5


Starting DFS from node 1:

Traversal:
1 → 2 → 4 → 3 → 5

---

## 💻 Implementation

### DFS using Recursion (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool visited[100];

void dfs(int node)
{
    visited[node] = true;

    cout << node << " ";

    for(auto child : adj[node])
    {
        if(!visited[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int nodes, edges;

    cin >> nodes >> edges;

    for(int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int source;
    cin >> source;

    dfs(source);

    return 0;
}
```
⏱️ Complexity Analysis

Let:

V = Number of vertices
E = Number of edges
Time Complexity:
O(V + E)

Each vertex and edge is visited once.

Space Complexity:
O(V)
Because of recursion stack and visited array.


📚 Applications of DFS

DFS is widely used in:

Detecting cycles in graphs
Finding connected components
Topological sorting
Maze solving
Path finding
Strongly Connected Components (SCC)
Backtracking problems
Tree traversal

✨ Author

Tasnim Shaun

Software Engineering Student
Learning Data Structures & Algorithms
