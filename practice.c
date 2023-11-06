#include <stdio.h>
int main()
{
    int count,i;
    for(i=1; i<=100 ;i++)
    {
        if(i%2!=0)
        {
            count=count+1;
        }
    }
    printf("%d numbers of odds numbers in between 1 to 100",count);
    return 0;
}