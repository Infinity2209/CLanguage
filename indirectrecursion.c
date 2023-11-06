#include <stdio.h>
int A(int n)
{
    if(n<=1)
    {return;}
    else
    {printf("%d",n-1);}
    B(n-1);
    printf("%d",n-2);
    B(n-2);
}
int B(int n)
{
    if(n<=1)
    {return;}
    else
    {printf("%d",n-2);}
    A(n-2);
    printf("%d",n-1);
    A(n-1);
}
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d",&a);
    b=A(a);
    printf("%d",b); 
    return 0;
}