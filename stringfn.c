#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="ananta";
    char s2[]="nag";
    char s3[54];
    // puts(strcat(s1,s2));
    printf("the lengt of s1 is %d\n",strlen(s1));
    printf("the lengt of s2 is %d\n",strlen(s2));
    puts(strrev(s1));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}