#include <iostream>
using namespace std;

#define v 6

char name[v]={'e','f','g','h','i','j'};
char color[v];
int startTime[v];
int endTime[v];
int t=0;
bool backEdge=false;

void DFS_Visit(int graph[][v], int u)

{
    color[u]='g';
    t++;
    startTime[u]=t;
    for(int i=0;i<v;i++)

    {
        if(graph[u][i]==1)

        {
            if(color[i]=='w')
            {
                cout << name[i] << " ";
                DFS_Visit(graph, i);
            }

            if(color[i]=='g')

            {
                backEdge=true;
            }
        }
    }


    color[u]='b';
    t++;
    endTime[u]=t;
}

void DFS(int graph[][v], int g)

{
    for(int i=0;i<v;i++)

    {
        color[i]='w';
    }

    for(int i=g;i<v;i++)
    {
        if(color[i]=='w')

        {
            cout << name[i] << " ";
            DFS_Visit(graph, i);
        }
    }

}

int main(){
    int graph[v][v]={
        {0,1,0,1,0,0},
        {0,0,0,0,1,0},
        {0,0,0,0,1,1},
        {0,1,0,0,0,0},
        {0,0,0,1,0,0},
        {0,0,0,0,0,1}
    };

    cout << "Visiting by DFS: ";
    DFS(graph, 3);
    cout << endl;

    if(backEdge==true)

    {
        cout << "Cycle detected.";
    }
    else

    {
        cout << "Cycle not detected";
    }

    cout << endl;
}
