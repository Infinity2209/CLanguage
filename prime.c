#include <stdio.h>
int check(int a)
{
    int i,k;
    for(i=2;i<=10;i++)
    {
        if(i==a)
        {
            continue;
        }
        k=a%i;
        if(k==0)
        {
            printf("%d is not a prime",a);
            break;
        }
    }
    if(k!=0)
    {
        printf("%d is a prime",a);
    }
}
int main()
{
    int x;
    printf("enter your number");
    scanf("%d",&x);
    check(x);
    return 0;
}