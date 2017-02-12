#include<stdio.h>
 int main()
 {
     int i,
     c=0;
     char a[10000];
     while(gets(a))
     {
            for(i=0;a[i];i++)
             {
                if(a[i]=='"')
                {
                    if(c==0)
                    {
                       printf("``");
                       c=1;
                    }
                    else
                    {
                       printf("''"); c=0;
                    }
                 }
                else
                {
                     printf("%c",a[i]);
                }
            }
           printf("\n");
      }
}
