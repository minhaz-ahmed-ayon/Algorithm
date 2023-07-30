#include<iostream>

using namespace std;
 
#define V 5
#define INF 999
int parent[V];
 
int find(int i)
{
    while (parent[i] != i)
        i = parent[i];
    return i;
}
 
void union1(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}
 
void kruskalMST(int cost[][V])
{
    int mincost = 0;
 
    for (int i = 0; i < V; i++)
        parent[i] = i;
 
    int edge_count = 0;
    while (edge_count < V - 1) {
        int min = INF, a = -1, b = -1;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (find(i) != find(j) && cost[i][j] < min) {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
 
        union1(a, b);
        cout << "Edge " << edge_count++ << ":(" << a << ", " << b << ") cost:" << min << endl;
        mincost += min;
    }
    cout << "Minimum cost= " << mincost << endl;
}
 
int main()
{
    int cost[][V] = {
        { INF, 2, INF, 6, INF },
        { 2, INF, 3, 8, 5 },
        { INF, 3, INF, INF, 7 },
        { 6, 8, INF, INF, 9 },
        { INF, 5, 7, 9, INF },
    };
 
    kruskalMST(cost);
 
    return 0;
}