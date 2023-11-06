/*#include <stdio.h>
int main()
{
    int a;  
    printf("enter your marks\n");
    scanf("%d",&a);
    if (a>90&&a<100)
    {
        printf("your grade is A");
    }
    else if(a>80&&a<100)
    {
        printf("your grade is B");
    }
    else if(a>40&&a<100)
    {
        printf("your grade is C");
    }
    else 
    {
        printf(" you are FAIL");
    }
    
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    char ch;
    int num1,num2,result;
    printf("enter your choices from +,-,*,/ \n");
    scanf("%c",&ch);
    printf("enter your numbers\n");
    scanf("%d%d",&num1,&num2);
    
    switch (ch)
    {
        case '+':
            result=num1+num2;
            printf("%d",result);
            break;
        case '-':
            result=num1-num2;
            printf("%d",result);
            break;    
        case '*':
            result=num1*num2;
            printf("%d",result);
            break;
        case '/':
            result=num1/num2;
            printf("%d",result);
            break;    
        default:
            printf("your choice is wrong");
            break;
    }
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    char ch;
    printf("enter your character from A-Z or a-z\n");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("your character is a vowel");
            break;
        default:
            printf("your character is a consonant");
            break;
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("enter your number");
    scanf("%d",&n);
    for (int i=1;i<=n ; i++)        
    {
        fact=fact*i;
    }
    printf("factorial is %d",fact);
    
    return 0;
}