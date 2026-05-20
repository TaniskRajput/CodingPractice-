#include <iostream>
#include <vector>
using namespace std;

// DFS function
void dfs(int node, vector<int> graph[], bool visited[])
{
    // Mark current node visited
    visited[node] = true;

    // Print current node
    cout << node << " ";

    // Visit all neighbors
    for (int i = 0; i < graph[node].size(); i++)
    {
        int neighbor = graph[node][i];

        // If neighbor not visited
        if (!visited[neighbor])
        {
            dfs(neighbor, graph, visited);
        }
    }
}

int main()
{
    int m, n;

    // Input vertices and edges
    cout << "Enter number of vertices: ";
    cin >> m;

    cout << "Enter number of edges: ";
    cin >> n;

    // Adjacency list
    vector<int> graph[m];

    cout << "Enter edges (u v): " << endl;

    // Input edges
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u); // Undirected graph
    }

    int start;

    // Starting vertex
    cout << "Enter starting vertex: ";
    cin >> start;

    // Visited array
    bool visited[100] = {false};

    cout << "\nDFS Traversal: ";

    // Call DFS
    dfs(start, graph, visited);

    return 0;
}