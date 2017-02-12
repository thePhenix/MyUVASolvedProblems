/*
Critical cases:
10 0 6 4 12 21 16 20 13 12 9
9 4 6 -1 2 -4 0 1 6 -2
8 7 1 2 9 4 6 2 -1
2 2 1
output :
Jolly
Jolly
Jolly
Jolly

*/

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int ar[3000];
int a[3000];
int main()
{
    int s;
    while(cin>>s)
    {
      int n,i,j,temp;
      for(i=0;i<s;i++)
      {
          cin>>ar[i];
      }
      for(i=1;i<s;i++)
      {
          a[i-1]=abs(ar[i]-ar[i-1]);
      }
      sort(a,a+s-1);
      int f=1;

      for(i=0;i<s-1;i++)
      {
        if(a[i]==a[i+1])
        {
            f=0;
            break;
        }
            else
             f=1;
      }


      if(f)
        cout<<"Jolly"<<endl;
      else
        cout<<"Not jolly"<<endl;

    }
    return 0;
}
