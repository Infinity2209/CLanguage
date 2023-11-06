#include <stdio.h>
struct student
{
    int i;
    char name[10];
    int mark[6];
};
int average(int a[])
{
    int i,aver=0;
    for(i=0;i<6;i++)
    {
        aver=aver+a[i];
    }
    return aver/6;
}
int main()
{
    int N,avg,i,j;
    struct student s[200];
    printf("enter the number of student\n");
    scanf("%d",&N);
    printf("enter the name and marks of 6 subjects\n");
    for(i=0;i<N;i++)
    {
        printf("enter name\t");
        scanf("%s",s[i].name);
        printf("enter the marks of 6 subjects\n");
        for(j=0;j<6;j++)
        {
            scanf("%d",&s[i].mark[j]);
        }
        avg=average(s[i].mark);
        if(avg>=90)
        {
            printf("%s has the grade A with average %d\n",s[i].name,avg);
        }
        else if(avg>=80)
        {
            printf("%s has the grade B with average %d\n",s[i].name,avg);
        }
        else if(avg>=40)
        {
            printf("%s has PASSED with average %d\n",s[i].name,avg);
        }
        else
        {
            printf("%s has FAILED with average %d\n",s[i].name,avg);
        }
        
    }
    return 0;
}