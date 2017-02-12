/*
Problem: 674 - Coin Change
Date: 4.7.14

*/

#include<iostream>
#include<cstring>
#include<cstdio>
#define MAX 10000
using namespace std;
int nway[MAX];
int coin[5]={1,5,10,25,50};
int ncount(int n)
{
    memset(nway,0,sizeof(nway));
    nway[0]=1;
    for(int i=0;i<5;i++)
    {
        int x=coin[i];
        for(int j=x;j<=n;j++)
        {
            nway[j]+=nway[j-x];
        }
    }
    return nway[n];
}

int main()
{
    int x;
    while(cin>>x)
    {
        cout<<ncount(x)<<endl;
    }
    return 0;
}
