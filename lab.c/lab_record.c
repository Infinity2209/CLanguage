/*#include <stdio.h>
void main()
{
    int n,remi,rev=0;
    printf("enter your number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        remi=n%10;
        rev=rev*10+remi;
        n=n/10;
    }
    printf("%d is the reverse number",rev);
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
        sum=sum+remi;
        n=n/10;
    }
    printf("%d",sum);
}*/
/*#include <stdio.h>
void main()
{
    int n,fact=1;
    printf("enter your number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d is the factorial",fact);
}*/
#include <stdio.h>
void main()
{
    int arr[100];
    int n,sum=0;
    float avg;
    printf("enter the number of numbers you want to enter\n");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(int j=1;j<=n;j++)
    {
        printf("%d\n",arr[j]);
        sum=sum+arr[j];
    }
    avg=sum/n;
    printf("%d is the sum\n",sum);
    printf("%f is the average value",avg);
}