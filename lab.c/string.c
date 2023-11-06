// #include <stdio.h>
// int main()
// { 
// char name[20]; 
// printf("Enter name: "); 
// scanf("%s", name); 
// printf("Your name is %s.", name); 
// return 0;
// }
#include <stdio.h>
#include<string.h>
int main()
{ 
char name[30]; 
printf("Enter name: "); 
fgets(name, 30, stdin); // read string
printf("Name: "); 
puts(name); // display string
return 0;
}