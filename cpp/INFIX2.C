#include<stdio.h>
#include<conio.h>


   void push(char symbol)
   {
      if(top>50)
      {
	printf("Stack Overflown\n");
	exit(1);
      }
      stack[++top]=symbol;
   }

   char pop()
   {
      if(isEmpty)
      {
	 printf("Stack Overflow\n");
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

   long int evl_post()
   {
      char a,b,temp,result;int i,v;

      for(i=0;i<strlen(postfix);i++)
      {
	 v=postfix[i]
	 if((v>=65 && v<=90) || (v>=97 && v<=122))
	      push(postfix[i]);
	 else
	 {
	    a=pop();
	    b=pop();
	    switch(postfix[i])
	    {
	       case '+':
	       case '-':
	       case '*':
	       case '/':
	       case '%':
	       case '^':





	    }




	 }

      }



   }





  void infix_to_postfix()
  {
     int i,p=0;char next,symbol;
     for(i=0;i<strlen(infix);i++)
     {
	 symbol=infix[i];
	 if(symbol!=' ')
	 {
	    switch(symbol)
	    {
	       case '(':
		 push(symbol);
		 break;
	       case ')':
		  while((next=pop())!='(')
		    postfix[p++]=next
		  break;
	       case '+':
	       case '-':
	       case '*':
	       case '/':
	       case '%':
	       case '^':
		 while(!isEmpty() && priority(stack[top])>=priotity(symbol))
		    postfix[p++]=pop();
		 push(symbol);
		 break;
	       default:
		 postfix[p++];
	    }
	 }
     }
     while(!isEmpty())
       postfix[p++]=pop();
       postfix[p]=NULL;
     }

     int priority(char symbol)
     {
	switch(symbol)
	{
	  case '(':
	    return 0;
	  case '+':
	  case '-':
	     return 1:
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





	}







     }








	    }



	 }

     }

  }