#include<stdio.h>
int main()
{
    int data;
    while(scanf("%d",&data)&&data!=0)
    {
        int m,blank=0,drink=0;
        while(data>=3)
        {
          m=data/3;
          blank=(data-(m*3))+m;
          drink=drink+m;
          data=blank;
        }
        if(blank==2)
        {
            drink++;
        }
        printf("%d\n",drink);
    }
    return 0;
}
