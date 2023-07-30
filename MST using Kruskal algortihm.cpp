#include <bits/stdc++.h>

using namespace std;

class Edge
{
    public:
        int source;
        int destination;
        int weight;
};

bool cmp(Edge e1, Edge e2)
{
    return (e1.weight < e2.weight);
}

int findParent(int v, int *parent)

{
    if(parent[v] == v)
    {
        return v;
    }
    return findParent(parent[v], parent);
}

void kruskalAlgo(Edge *input, int e, int v)
{
    Edge *output = new Edge[v-1];
    int *parent = new int[v];
    int count = 0, m = 0;

    for(int i=0; i<v; i++)
    {
        parent[i] = i;
    }

    sort(input, input+e, cmp);

    while(count != v-1)
        {
        int sourceParent = findParent(input[m].source, parent);
        int destinationParent = findParent(input[m].destination, parent);

        if(sourceParent != destinationParent)
            {
            output[count] = input[m];
            count++;
            parent[sourceParent] = destinationParent;
        }
        m++;
    }

    for(int i=0; i<v-1; i++)
        {
        if(output[i].source < output[i].destination){
            cout<<output[i].source<<" "<<output[i].destination<<" "<<output[i].weight<<endl;
        }
    else
    {
            cout<<output[i].destination<<" "<<output[i].source<<" "<<output[i].weight<<endl;
        }
    }
}

int main()
{
    int n,e;
    cout<<"Enter vertex number and edge: ";
    cin>>n>>e;
    Edge *input = new Edge[e];

    cout<<"Enter source, destination, weight"<<endl;
    for(int i=0; i<e; i++)
    {
        int s, d, w;
        cin>>s>>d>>w;

        input[i].source = s;
        input[i].destination = d;
        input[i].weight = w;
    }

    cout<<endl<<endl;
    kruskalAlgo(input, e, n);

    return 0;
}
