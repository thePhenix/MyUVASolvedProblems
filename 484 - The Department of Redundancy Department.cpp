#include<cstdio>
#include<iostream>
#include<cstring>
#include<list>
#include<vector>
#include<map>
#include<cstdlib>
using namespace std;
int main()
{
    list<int> l;
    map<int,int> m;
    int n;
    list<int>::iterator ll;
    while(cin>>n)
    {

       if(m[n]>0)
       {
           m[n]++;
       }
       else
       {
           m[n]=1;
           l.push_back(n);
       }
    }


    for(ll=l.begin();ll!=l.end();ll++)
    {
        cout<<*ll<<" "<<m[*ll]<<endl;
    }
    return 0;
}
