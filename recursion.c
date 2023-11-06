#include <stdio.h>
int fact(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int a;
    printf("enter your number for factorial\n");
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,fact(a));
    return 0;
}