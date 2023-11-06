/*#include <stdio.h>
int main()
{
    int num,index=0;
    printf("enter a number\n",num);
    scanf("%d",&num);
    printf("the numbers are\n");
    do
    {
      index=index+1;
      printf("%d\n",index);       

    } while (index<num);
    
    return 0;
}*/
// while loops
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i<24)
//     {
//         printf("%d\n",i);
//         i=i+1;
//     }
    
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n,fact=1,i=1;
    printf("enter the number to get the factorial");
    scanf("%d",&n);
    do
    {
        fact=fact*(i++);
    }
    while(i<=n);
    printf("%d is the factorial",fact);
    return 0;
}