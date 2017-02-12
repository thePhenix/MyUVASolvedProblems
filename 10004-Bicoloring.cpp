#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
vector<int> node[201];
queue<int> v;

void find(int src)
{
   char c[201];
   int visited[201]={0};
   memset(c,'0',200);
   int x,y,i;
   bool f=1;
   c[src]='r';
   v.push(src);
   while(!v.empty() and f)
   {
       x=v.front();
       for(i=0;i<node[x].size();i++)
       {
           y=node[x][i];
           if(visited[y])
           {
               if(c[x]==c[y])
               {
                   f=0;
                   break;
               }
           }
           else
           {
               v.push(y);
               if(c[x]=='r')
                c[y]='g';
               else
                c[y]='r';
               visited[y]=1;

           }
       }
       v.pop();
   }
   if(f)
    cout<<"BICOLORABLE."<<endl;
   else
    cout<<"NOT BICOLORABLE."<<endl;

}

int main()
{
    int n,e,i,x,y;
    while(cin>>n and n)
    {
        cin>>e;
        for(i=0;i<e;i++)
        {
            cin>>x>>y;
            node[x].push_back(y);
            node[y].push_back(x);
        }
        find(x);
        for(int i=0;i<201;i++)
        {
            node[i].clear();
        }
    }

    return 0;
}
