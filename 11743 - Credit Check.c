#include<stdio.h>
int main()
{
    int number[16];
    int i,j,counter;
    scanf("%d",&counter);
    while(1)
        {
        if(counter==0)
            break;
        int sum=0;
        int sum1=0;
        int sum2=0;
        for(i=0;i<16;i++)
        {
            scanf("%1d",&number[i]);
        }
        for(i=0;i<16;i+=2)
        {
            number[i]*=2;
            if(number[i]>=10)
            {
                number[i]=(number[i]%10)+1;
            }
            sum1=sum1+number[i];
        }
        for(i=1;i<16;i+=2)
        {
            sum2=sum2+number[i];
        }
        sum=sum1+sum2;
        if(sum%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    counter--;
    }
    return 0;

}
