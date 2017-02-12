#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
vector<char> v;
int track[40]={0},size;
void bt(char a[],int s,int k)
{
    int i,j;
    if(v.size()==s)
    {
        for(i=0;i<s;i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
    else
    {
        for(i=k;i<size;i++)
        {
            if(track[i]==0)
            {
                v.push_back(a[i]);
                track[i]=1;
                bt(a,s,i+1);
                track[i]=0;
                v.pop_back();
            }
            int f=0;
            while(a[i]==a[i+1])
            {
                i++;
            }


        }
    }
}

int main()
{
    string st;
    int n;
    while(cin>>st>>n)
    {
        char s[35];
        for(int i=0;i<st.size();i++)
        {
            s[i]=st[i];
        }
        size=strlen(s);
        sort(s,s+size);
        bt(s,n,0);
        v.clear();
        memset(s,0,35);
    }
}

