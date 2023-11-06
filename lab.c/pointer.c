#include <stdio.h>
int main()
{
    int a=70,*p,**q;
    p=&a;
    q=&p;
    printf("%d is the number\n%d is the adderess %d is the address of pointer",a,p,q);
    return 0;
}