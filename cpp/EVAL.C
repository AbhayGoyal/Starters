#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#define MAX=50
#define BLANK ''
#define TAB '\t'
				//(6+(4*5)-(2^3)+7)
  void push(long int symbol);
  long int pop();
  void infix_to_postfix();
  long int eval_post();
  int priority(char symbol);
  int isEmpty();
  int white_space();
  char infix[50],postfix[50];
  long int stack[50];
  int top;

 int main()
 {
    long int value;
    top=-1;
    clrscr();
    printf("Enter the postfix expression\n");
    gets(infix);
    infix_to_postfix();
    printf("Postfix =%s\n",postfix);
    value=eval_post();
    printf("Value of expression:%ld\n",value);
    return 0;
}

void infix_to_postfix()
{
   unsigned int i,p=0;
   char next,symbol;
   for(i=0;i<strlen(infix);i++)
   {
      symbol=infix[i];
      if(!white_space(symbol))
      {
	switch(symbol)
	{
	   case '(':
	     push(symbol);
	     break;
	   case ')':
	     while((next=pop())!='(')
	       postfix[p++]=next;
	     break;
	   case '+':
	   case '-':
	   case '*':
	   case '/':
	   case '%':
	   case '^':
	       while(!isEmpty() && priority(stack[top])>=priority(symbol))
		 postfix[p++]=pop();
	       push(symbol);
	       break;
	   default:
	     postfix[p++]=symbol;

	}

      }
   }
   while(!isEmpty())
     postfix[p++]=pop();
     postfix[p]='\0';

}

int priority(char symbol)
{
    switch(symbol)
    {
       case '(':
	 return 0;
       case '+':
       case '-':
	  return 1;
       case '*':
       case '/':
       case '%':
	  return 2;
       case '^':
	  return 3;
       default:
	  return 0;

    }

}

   void push(long int symbol)
   {
     if(top>50)
     {
	printf("\nStack Overflow");
	exit(1);
     }
     stack[++top]=symbol;
   }

   long int pop()
   {
      if(isEmpty())
      {
	     printf("Stack overflow");
	     exit(1);
	}
       return (stack[top--]);

   }

   int isEmpty()
   {
     if(top==-1)
       return 1;
     else
       return 0;
   }

   int white_space(char symbol)
   {
      if(symbol==' '|| symbol=='\t')
	 return 1;
      else
	 return 0;
   }

   long int eval_post()
   {
       long int a,b,temp,result;
       unsigned int i;
       for(i=0;i<strlen(postfix);i++)
       {
	  if(postfix[i]<='9' && postfix[i]>='0')
	     push(postfix[i]-'0');
	  else
	  {
	      a=pop();
	      b=pop();
	      switch(postfix[i])
	      {
		 case '+':
		    temp=a+b;
		    break;
		 case '-':
		     temp=a-b;
		     break;
		 case '*':
		    temp=a*b;
		    break;
		 case '/':
		    temp=a/b;
		    break;
		 case '%':
		    temp=a%b;
		    break;
		 case '^':
		    temp=a^b;
		    break;

	      }
	      push(temp);
	  }

       }
       result=pop();
       return result;

   }
