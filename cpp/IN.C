#include<stdio.h>
#include<conio.h>
#include<string.h>
char op[10];
int flag=-1;

void push(char ch)
{
   op[++flag]=ch;
}

char pop()
{
   char ch;
   ch=op[flag];
   flag--;
   return ch;
}

int getweight(char ch)
{
  if(ch=='+' || ch=='-')
    return 1;
  if(ch=='*' || ch=='/' || ch=='%')
    return 2;
  if(ch=='^')
    return 3;
  return 0;
}

   void main()
   {
      char st[40];int i,l,l1,weight1,weight2;char ch,chpop;
      clrscr();
      gets(st);
      l1=strlen(st);
      for(i=0;i<l1;i++)
      {
	 ch=st[i];
	 if(ch=='(')
	 {
	   push(ch);
	   continue;
	 }
	 l=ch;
	 if((l>=65 && l<=90) || (l>=97 && l<=122))
	   printf("%c",l);
	 else
	   if(ch==')')
	   {
	       chpop=pop();
	       while(chpop!='(')
		 chpop=pop();
	   }
	   else
	   {
	      if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='*'
	      || ch=='^')
	      {
		 weight1=getweight(ch);
		 chpop=pop();
		 weight2=getweight(chpop);
		 if(weight1==weight2 || weight2<weight1)
		 {
		   push(chpop);
		   push(ch);
		 }
		 if(weight2>weight1)
		 {
		   printf("%c",chpop);
		   push(ch);
		 }
	      }
	   }
      }
      while(flag!=-1)
      {
	ch=pop();
	printf("%c",ch);
      }

   }