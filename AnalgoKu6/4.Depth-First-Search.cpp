/*	Nama	: Alvin
	NPM		: 140810180013
	Kelas	: A
	Program	: Depth First Search
*/
#include<bits/stdc++.h> 
using namespace std; 
  

class Graph 
{ 
    int V;    

    list<int> *adj; 
  
    void DFSUtil(int v, bool visited[]); 
public: 
    Graph(int V);   
  
 
    void addEdge(int v, int w); 

    void DFS(int v); 
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
} 
  
void Graph::DFSUtil(int v, bool visited[]) 
{ 
    
    visited[v] = true; 
    cout << v << " "; 

    list<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
            DFSUtil(*i, visited); 
} 
  
 
void Graph::DFS(int v) 
{ 
    
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
 
    DFSUtil(v, visited); 
} 
  
 
int main() 
{ 
    
    Graph g(8); //jumlah node
    g.addEdge(1, 2); 
    g.addEdge(1, 3); 
    g.addEdge(2, 3); 
    g.addEdge(2, 4); 
    g.addEdge(2, 5); 
    g.addEdge(3, 5); 
    g.addEdge(3, 7); 
    g.addEdge(3, 8);
	g.addEdge(4, 5);  
    g.addEdge(5, 6); 
    g.addEdge(7, 8); 
   
  
    cout << "DEPTH FIRST SEARCH DIMULAI DARI 1 \n"; 
    g.DFS(1); 
  
    return 0; 
} 

