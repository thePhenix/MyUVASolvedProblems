#include<iostream>
#include<algorithm>
#include<cstdio>
#include<climits>

using namespace std;

int main()
{
    int n,b,h,w;
    while(cin>>n>>b>>h>>w)
    {

        long long pcost,seat,i,j,c=0,f=0;
        int cost=INT_MAX;
        for(j=0;j<h;j++)
        {

            cin>>pcost;
            for(i=0;i<w;i++)
            {
              cin>>seat;
              if(seat>=n)
              {
                if(cost>n*pcost)
                    cost=n*pcost;
              }
            }
        }
        if(cost<b)
            cout<<cost<<endl;
        else
            cout<<"stay home"<<endl;

    }

     return 0;

}

