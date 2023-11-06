#include<stdio.h>
//Declaring outer and inter structures//
struct Person//Main Structure//
{
   char Name[500];
   int Age;
   char Gender;
   struct Address//Nested Structure//
   {
      char Apartment[500];
      char Street[500];
      char City[100];
      char State[100];
      int Zipcode;
    }a[500];//Nested Structure Variable//
}p[500];//Main Structure Variable//
void main(){
   //Declaring variable for For loop//
   int i,n;
   printf("enter the number of person you want to enter");
   scanf("%d",&n);
   //Reading User I/p//
   for (i=1;i<n;i++){//Declaring function to accept 2 people's data//
      printf("Enter the Name of person %d : \n",i);
      gets(p[i].Name);
      printf("Enter the Age of person %d : \n",i);
      scanf("%d",&p[i].Age);
      printf("Enter the Gender of person %d \n: ",i);
      scanf("%c",&p[i].Gender);
      printf("Enter the City of person %d : \n",i);
      gets(p[i].a[i].City);
      printf("Enter the State of person %d : \n",i);
      gets(p[i].a[i].State);
      printf("Enter the Zip Code of person %d :\n",i);
      scanf("%d",&p[i].a[i].Zipcode);
   }
   //Printing O/p//
   for (i=1;i<3;i++){
      printf("The Name of person %d\n is : %s\n",i,p[i].Name);
      printf("The Age of person %d\n is : %d\n",i,p[i].Age);
      printf("The Gender of person %d\n is : %c\n",i,p[i].Gender);
      printf("The City of person %d\n is : %s\n",i,p[i].a[i].City);
      printf("The State of person %d\n is : %s\n",i,p[i].a[i].State);
      printf("The Zip code of person %d\n is : %d\n",i,p[i].a[i].Zipcode);
   }
}