/*
UVA:336;
A Node Too Far
Run time :0.308
Rank: 2447

*/

#include<iostream>
#include<cstring>
#include<vector>
#include<cstdio>
#include<map>
#include<queue>
#define MAX 100100
using namespace std;

bool visit[MAX];
int level[MAX];
vector<int> graph[MAX];
queue<int> q;

void resetVisit(){
    memset(visit,0,sizeof(visit));
    memset(level,0,sizeof(level));

}

void resetGraph()
{
    for(int i=0;i<MAX;i++)
        graph[i].clear();
}

int bfs(int src,int ttl)
{
    resetVisit();
    int visited=0;
    q.push(src);
    visit[src]=1;
    level[src]=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++)
        {
            int y=graph[x][i];
            if(!visit[y])
            {
                visit[y]=1;
                level[y]=level[x]+1;
                if(level[y]<=ttl)
                    visited++;
                q.push(y);
            }
        }
    }

    return visited+1;

}


int main()
{
    int run,tc=0;

    while(cin>>run and run)
    {
        int node1,node2,TTL,NODE,node=0;
        map<int,int> m;
        for(int i=0; i<run; i++)
        {
            cin>>node1>>node2;
            if(!m[node1])
                m[node1]=++node;
            if(!m[node2])
               m[node2]=++node;
            graph[node1].push_back(node2);
            graph[node2].push_back(node1);
        }
        while(cin>>NODE>>TTL)
        {
            int notVisited;
            if(!NODE and !TTL)
                break;
            else if(!TTL)
                notVisited=node-1;
            else if(graph[NODE].size()==0)
                notVisited=0;

            else
                notVisited=node-bfs(NODE,TTL);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++tc,notVisited,NODE,TTL);


        }
        resetGraph();

    }
    return 0;
}






