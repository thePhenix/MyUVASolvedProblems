#include<stdio.h>
int main()
{
    int i,j,n;
    j=0;
    while(scanf("%d",&n) && n!=0)
    {
        j++;
      int number[5000];
      int avg=0;
      int result=0;
      for(i=0;i<n;i++)
      {
        scanf("%d",&number[i]);
        avg=avg+number[i];
      }
      avg/=n;
      for(i=0;i<n;i++)
      {
          if(number[i]>avg)
          {
              result=result+(number[i]-avg);
          }
      }
      printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,result);
    }
    return 0;
}
