#include<stdio.h>
int main()
{
    while(1)
    {
        int h1,m1,h2,m2,a,b,i,time=0;
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0 && h2==0 && m1==0 && m2==0)
        {
            break;
        }
        a=((h1*60)+m1);
        b=((h2*60)+m2);
        if(a<b)
        {
            time=b-a;
        }
        else
        {
          for(i=a;;i++)
          {
            if(a==1440)
            {
                i=1;
            }

            time++;

            if(i==b)
            {
                break;
            }
            a++;
          }
        }
        printf("%d\n",time);

    }
    return 0;
}
