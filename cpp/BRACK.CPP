#include<stdio.h>
#include<conio.h>

char arr[50];
int flag=-1;
void push(char ch)
{
      arr[++flag]=ch;
}
char pop()
{
  if(flag==-1)
  {
      return NULL;
  }
  else
  {
      return arr[flag];
      flag--;
  }
}
int main()
{
   char st[50];
   while(st)
   for()

   return 0;
}