#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stack.h>

   struct stack
   {
      int data[100];
      int top;
   }stack;

   int priority(char x)
   {
     if(x=='(')
       return 0;
     if(x=='+' || x=='-')
       return 1;
     if(x=='*' || x=='/' || x=='%')
       return 2;
       return 3;
   }
   void init(stack *s)
   {
      s->top=-1;
   }

   int empty(stack *s)
   {
      if(s->top==-1)
	return 1;
   }

   int full(stack *s)
   {
      if(s->top==100)
	return 1;
      else
	return 0;
   }
   void push(stack *s,char x)
   {
      s->top=s->top+1;
      s->data[s->top]=x;
   }

   char pop(stack *s)
   {
      int x;
      x=s->data[s->top];
      s->top=s->top-1;
      return x;
   }

   char top(stack *s)
   {
      return(s->data[s->top]);
   }

   void main()
   {
      stack s;int token;
      char x;
      init(&s);
      clrscr();
      printf("Enter infix expression\n");
      while((token=getchar())!='\n')
      {
	 if(isalnum(token))
	    printf("%c",token);
	 else
	    if(token=='(')
	      push(&s,'(');
	    else
	    {
	      if(token==')')
		 while((x=pop(&s)!='(')
		 printf("%c",x);
	      else
	      {
		while(priority(token)<=priority(top(&s)) && !empty(&s))
		{
		   x=pop(&s);
		   printf("%c",x);
		}
		push(&s,token);
	      }
	    }
      }
      while(!empty(&s))
      {
	x=pop(&s);
	printf("%c",x);
      }
   getch();
   }

   }