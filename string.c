#include <stdio.h>
int main()
{
    char str[50];
    printf("enter your name\n");
    gets(str);
    // scanf("%s",str);
    printf("your name is ");
    puts(str);
    return 0;
}