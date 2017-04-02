#include<stdio.h>
#include<conio.h>
   void main()
   {
   clrscr();
   char arr[]="Abhay",*p; int a,b,i;
   p=arr;
   printf("Enter the start and end limts");
   scanf("%d%d",&a,&b);
   for(i=a-1;i<=b;i++)
   {
      printf("%c",*(p+i));
   }
    getch();

   }