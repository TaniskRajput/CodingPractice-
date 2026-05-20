#include <iostream>
#include <vector>
#include <queue>
using namespace std;

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

    // Queue for BFS
    queue<int> q;

    // Mark start node visited
    visited[start] = true;

    // Push into queue
    q.push(start);

    cout << "\nBFS Traversal: ";

    // BFS loop
    while (!q.empty())
    {
        // Get front element
        int current = q.front();

        // Remove from queue
        q.pop();

        // Print current node
        cout << current << " ";

        // Visit all neighbors
        for (int i = 0; i < graph[current].size(); i++)
        {
            int neighbor = graph[current][i];

            // If not visited
            if (!visited[neighbor])
            {
                visited[neighbor] = true;

                // Add to queue
                q.push(neighbor);
            }
        }
    }

    return 0;
}