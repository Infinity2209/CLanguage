#include <stdio.h>
int main()
{
    int a[]={10,15,-5,8,13,21,-3,47};
    int *p,*q;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
    printf("%d\n",(*p)++);
    q--;
    printf("%d\n",(*(q+2))--);
    printf("%d\n",*(p+2)-2);
    printf("%d",*(p++-2)-1);
    return 0;
}