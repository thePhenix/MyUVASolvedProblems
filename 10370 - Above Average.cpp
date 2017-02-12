#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int tc,a[1001];
    cin>>tc;
    while(tc--)
    {
        double result,sum=0,n;
        int i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum/=n;
        int c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>sum)
                c++;
        }
        result=(100*c)/n;
        printf("%.3lf%%\n",result);
    }
    return 0;
}
