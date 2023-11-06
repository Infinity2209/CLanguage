/*#include <stdio.h>
void main()
{
    int n=157,sum=0,remi;
    while(n!=0)
    {
        remi=n%10;
        sum=sum+remi;
        n=n/10;
    }
    printf("%d",sum)
}*/
/*#include <stdio.h>
void main()
{
    int n,sum=0,remi;
    printf("enter your number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        remi=n%10;
        sum=sum+remi*remi*remi;
        n=n/10;
    }
    if(sum==n)
    {
        printf("armstrong");
    }
    else
    {
        printf("not anstrong");
    }
}*/
/*#include <stdio.h>
void main()
{
    for(int i=1;i<=50;i++)
    {
        printf("*");
    }
}*/
/*#include <stdio.h>
void main()
{
    // for(int j=1;j<=5;j++)
    for(int j=5;j>=0;j--)
    {
        // for(int i=1;i<=20;i++)
        for(int i=1;i<=j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
#include <stdio.h>
void main()
{
    for(int j=1;j<=5;j++)
    // for(int j=5;j>=0;j--)
    {
        for(int k=1;k<=5-j;k++)
        {
            printf(" ");
        }
        // for(int i=1;i<=j;i++)
        for(int i=1;i<=2*j-1;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}