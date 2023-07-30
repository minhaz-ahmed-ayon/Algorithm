#include<bits/stdc++.h>
using namespace std;

vector <int> graph[4];
bool visited[4];

void dfs(int source)

{
    visited[source] = 1;
     for (int i =0;i<graph[source].size();i++)
     {
         int next = graph[source][i];
        if (visited[next]== 0)
           dfs(next);

}
}
int main(){

  int nodes,edges;
  cout << "Enter 4 nodes and edges:     (types as 0 space 3)"<<endl;
  cin>>nodes>>edges;
  for(int i=0; i < edges; i++){
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  dfs(3);

for(int i=0;i < nodes; i++){
        if (visited[i]==1){
            cout << "Nodes "<< i <<"  is visited."<<endl;

        }
        else{
         cout << "Node "<< i << "  is not Visited"<<endl;

        }
}
     return 0;

}









