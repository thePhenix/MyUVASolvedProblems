#include<stdio.h>
#include<string.h>
int main()
{
    char ch[150];
    int i,j,length,number;
    while(gets(ch))
    {
        number=0;
        length=strlen(ch);
        for(i=0;i<length;i++)
        {

            if(ch[i]>48 && ch[i]<=57)
            {
                number=number+ch[i]-48;
            }
            if(ch[i]>='A' && ch[i]<='Z')
            {
                for(j=0;j<number;j++)
                {
                    printf("%c",ch[i]);
                }
                number=0;
            }
            else if(ch[i]=='b')
            {
                for(j=0;j<number;j++)
                {
                    printf(" ");
                }
                number=0;
            }
            if(ch[i]=='!')
            {
                    printf("\n");
            }
            if(ch[i]=='*')
            {
                for(j=0;j<number;j++)
                {
                    printf("*");
                }
                number=0;
            }

        }
        printf("\n");
    }
    return 0;
}
