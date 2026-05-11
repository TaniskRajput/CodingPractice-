#include <iostream>
using namespace std;

class Graph {
    int a[10][10], n;
public:
    void create() {
        cout << "Enter number of vertices: ";
        cin >> n;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                a[i][j] = 0;
            }
        }
        int e;
        cout << "Enter number of edges: ";
        cin >> e;

        cout << "Enter edges (u v):\n";

        for(int k=0; k<e; k++) {
            int u, v;
            cin >> u >> v;
            a[u][v] = 1;
        }
    }
    void display() {
        cout << "\nAdjacency Matrix:\n";
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Graph g;
    g.create();
    g.display();
    return 0;
}