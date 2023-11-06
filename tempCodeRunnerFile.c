#include<stdio.h>
void main()
{
    char ch;
    printf("choose any one of the char from a-z");
    scanf("%c",&ch);
    switch (ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':printf("vowel");
                break;
        default:printf("it is a consonant");
      
    }
}