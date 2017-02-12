/*
Cat : DP
Algo: Knapsak
date: 11.7.14

*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int dp[1002][102];
int cost[1002],weight[1002];

int n,CAP;

int func(int ind,int w)
{
    if(ind==n)
        return 0;
    if(dp[ind][w]!=-1)
        return dp[ind][w];
    int profit1=0;
    int profit2=0;

    if(w+weight[ind]<=CAP)
        profit1=cost[ind]+func(ind+1,w+weight[ind]);

    profit2=func(ind+1,w);

    dp[ind][w]=max(profit1,profit2);

    return dp[ind][w];

}



int main()
{
    int tc;
    //freopen("supersale.txt","r",stdin);
    scanf("%d",&tc);
    while(tc--)
    {

        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&cost[i],&weight[i]);
        }
        int ppl;
        scanf("%d",&ppl);


        long long sum=0;
        for(int i=0;i<ppl;i++)
        {
            scanf("%d",&CAP);
            memset(dp,-1,sizeof(dp));
            sum+=func(0,0);
        }

        printf("%lld\n",sum);
    }
    return 0;
}
