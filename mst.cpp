#include<iostream>
#include<queque>
#include<cstring>
#include<cstdio>
#define MAX 100100
using namespace std;
bool visited[MAX];


struct graph{
    int node,cost;
    bool operator < (const graph& a) const{
        return cost>a.cost;
    }
};
vector<graph> v[MAX];

void mst(int src)
{
    memset(visited,0,sizeof(visited));
    priority_queue<graph> q;
    visited[src]=1;
    q.push(src);
    while(!q.empty())
    {
        graph g=q.front();

    }

}

int main()
{
    int ed,node,edge,cost;
    cin>>ed;
    for(int i=0;i<ed;i++)
    {

    }
}
