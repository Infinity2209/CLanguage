/*#include <stdio.h>
int main()
{   
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("your entered age is %d \n", age);
    if (age>=18)
    {
        printf("you can vote");
    }
    else if(age>=10)
    {
        printf("you can only vote for kids");
    }
    // else
    // {
    //     printf("you cannot vote");
    // }

    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int a,b;
    printf("what is the status of yours in maths and science\n");
    printf("enter your maths marks\n",a);
    scanf("%d",&a);
    printf("entert your science marks\n",b);
    scanf("%d",&b);
    if (a>33&b>33)
    {
        printf("you have passed in both maths and science and you will get a gift that is a dairy");
    }
    else if (a>33)
    {    
        printf("you have passed in maths and you will get a gift that is a pack of pen\n");
    } 
    else if(b>33)
    {
        printf("you have passed in science and you will get a gift that is a pack of pen\n");
    } 
    else
    {
        printf("you are not elegible for this scheme");
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter your marks \n",a);
    scanf("%d",&a);
    if (a>90 && a<100)
    {
        printf("your grade is A");
    }
    else if (a>80 && a<100)
    {
        printf("your grade is B");
    }
    else if (a>40 && a<100)
    {
        printf("your grade is C");
    }
    else
    {
        printf("you are FAIL");
    }
    
    return 0;
}