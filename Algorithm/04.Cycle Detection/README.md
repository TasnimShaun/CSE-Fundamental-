# Cycle Detection in Graph

## 📌 Introduction

Cycle Detection is an important application of graph traversal algorithms. A cycle exists in a graph when we can start from a node and return to the same node by following a path.

Cycle detection is mainly used to identify whether a graph contains any circular dependency or loop.

It can be detected using:

- DFS (Depth First Search)
- BFS (Kahn's Algorithm for Directed Graph)
- Disjoint Set Union (DSU) for Undirected Graph

---

## 🔥 Cycle Detection Using DFS

In DFS, we keep track of visited nodes.

For an **undirected graph**, if we visit an already visited node and that node is not the parent of the current node, then a cycle exists.

---

## 🧠 Algorithm

1. Start DFS from any unvisited node.
2. Mark the current node as visited.
3. Visit all adjacent nodes.
4. If an adjacent node is already visited and it is not the parent node, then a cycle is detected.
5. If no such node exists, the graph does not contain a cycle.

---

## 💡 Example

Graph:

```
      1
     / \
    2---3
```

Traversal:

```
1 → 2 → 3
```

Here, node 3 connects back to node 1, so a cycle exists.

Output:

```
Cycle Detected
```

---

## 💻 Implementation (DFS - Undirected Graph)

### C++ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool visited[100];

bool dfs(int node, int parent)
{
    visited[node] = true;

    for(auto child : adj[node])
    {
        if(!visited[child])
        {
            if(dfs(child, node))
                return true;
        }
        else if(child != parent)
        {
            return true;
        }
    }

    return false;
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

    bool cycle = false;

    for(int i = 1; i <= nodes; i++)
    {
        if(!visited[i])
        {
            if(dfs(i, -1))
            {
                cycle = true;
                break;
            }
        }
    }

    if(cycle)
        cout << "Cycle Detected";
    else
        cout << "No Cycle";

    return 0;
}
```

---

## ⏱️ Complexity Analysis

Let:

- V = Number of vertices
- E = Number of edges

### Time Complexity:

```
O(V + E)
```

Each vertex and edge is visited once.

### Space Complexity:

```
O(V)
```

Due to recursion stack and visited array.

---

## 📚 Applications

Cycle Detection is used in:

- Detecting deadlocks in operating systems
- Dependency management
- Scheduling problems
- Compiler design
- Network analysis
- Detecting loops in graphs

---

## 🔄 DFS Cycle Detection Concept

Important concepts:

- Graph Traversal
- DFS
- Recursion
- Visited Array
- Parent Tracking
- Backtracking

---

## ✨ Author

**Tasnim Shaun**

Software Engineering Student  
Interested in Data Structures, Algorithms & Machine Learning
