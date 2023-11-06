#include <stdio.h>
void main()
{
    int a=10,z;
    int*p = &a;
    int**q = &p;
    **q=**q+50;
    *p=5;
    a=30;
    *p=*p+30;
    z=a+**q;
    printf("%d ",z);
    // printf("%x %x",p,q);
    
}
