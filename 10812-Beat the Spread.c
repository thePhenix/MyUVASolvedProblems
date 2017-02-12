#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    while(c>0)
    {
        int sum,dif,x,y;
        scanf("%d %d",&sum,&dif);
        if((sum>=dif)&&(sum+dif)%2==0)
        {
            x=(sum+dif)/2;
            y=sum-x;
            if(x>y)
            {
                printf("%d %d\n",x,y);
            }
            else
            {
                printf("%d %d\n",y,x);
            }
        }
        else
        {
            printf("impossible\n");
        }
        c--;
    }
    return 0;
}
