#include <list>
#include <iostream>
using namespace std;

class Graph
{
private:
    int V;                               // Number of vertices
    list<int> *adj;                      // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]); // A function used by DFS

public:
    Graph(int);
    void addEdge(int u, int v); // Function to add an edge to the graph
    void printGraph();          // Function to print the graph
    void DFS(int v);            // Function to perform DFS traversal
    void BFS(int s);            // Function to perform BFS traversal
};