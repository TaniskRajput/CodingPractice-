#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;

    // Input number of vertices and edges
    cout << "Enter number of vertices: ";
    cin >> m;

    cout << "Enter number of edges: ";
    cin >> n;

    // Create adjacency list
    vector<int> graph[m];

    cout << "Enter edges (u v): " << endl;

    // Input edges
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        // Add edge
        graph[u].push_back(v);
        graph[v].push_back(u); // For undirected graph
    }

    // Display adjacency list
    cout << "\nAdjacency List:\n";

    for (int i = 0; i < m; i++)
    {
        cout << i << " -> ";

        // Print connected vertices
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}