#include <iostream>
using namespace std;

int main()
{
    int m, n;

    // Input number of vertices and edges
    cout << "Enter number of vertices: ";
    cin >> m;

    cout << "Enter number of edges: ";
    cin >> n;

    // Create adjacency matrix initialized with 0
    int graph[100][100] = {0};

    // Input edges
    cout << "Enter edges (u v): " << endl;

    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        // Mark edge in matrix
        graph[u][v] = 1;
        graph[v][u] = 1; // For undirected graph
    }

    // Display adjacency matrix
    cout << "\nAdjacency Matrix:\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}