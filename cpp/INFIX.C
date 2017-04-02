#include<stdio.h>
#include<conio.h>

   char stack[30],stack1[30];
   char in[50];
   int flag=-1,flag1=-1;

   void push(char ch,int n)
   {
      if(n==0)
      {
	 flag++;
	 stack[flag]=ch;
      }
      if(n==1)
      {
	 flag1++;
	 stack1[flag1]=ch;
      }
   }

   char pop(int n)
   {
      if(n==0)
      {
	char ch=stack[flag];
	flag--;
	return ch;
      }
      if(n==1)
      {
	char ch=stack1[flag1];
	flag1--;
	return ch;
      }
      return n;
   }

   int priority(char ch)
   {
     if(ch=='+' || ch=='-')
	return 0;
     if(ch=='*'|| ch=='/' || ch=='%')
	return 1;
     return 4;

   }

   void main()
   {
       char ch,cha,cher;int i;
       //push('(',0);
       clrscr();
       //char stack[30],stack1[30];
       //stack[0]='(';
      // flag=flag1=-1;
       printf("Please enter the data\n");
       push(NULL,0);
       while((ch=getchar())!='\n')
       {
	 if(ch=='(')
	  {
	     push(ch,0);
	     continue;
	  }
	  if(ch==')')
	  {
	    while((cha=pop(0))!='(')
	    {
	      push(cha,1);
	      //cha=pop(0);
	    }
	    //push(cha,1);
	  }

	  if(isalnum(ch))
	  {
	    push(ch,1);
	    continue;
	  }
	  if(ch=='+'||ch=='-'||ch=='*'||ch=='%'||ch=='/')
	  {
	     i=priority(ch);
	     if(i==0)
	     {
	       cha=pop(0);
	       //if(cha!='+'||cha!='-'||cha!='*'||cha!='/'||cha!='%')
		 // push(ch,0);
	       if(cha=='*'||cha=='/'||cha=='%')
	       {
		   push(cha,1);
		   push(ch,0);
	       }
	       if(cha=='+'||cha=='-')
	       {
		  //cha=pop(0);
		  push(cha,1);
		  push(ch,0);
	       }
		  //cha=pop(0);
		  //push(cha,1);
	     }
	     if(i==1)
	     {
	       cha=pop(0);
	      // if(cha!='+'||cha!='-'||cha!='*'||cha!='/'||cha!='%')
		// push(ch,0);
	       if(cha=='+' || cha=='-')
	       {
		 push(cha,0);
		 push(ch,0);
	       }
	       if(cha=='/' || cha=='*'|| cha=='%')
	       {
		  push(cha,1);
		  push(ch,0);
	       }
	     }
	  }
       }
       for(i=0;i<=flag1;i++)
       {
	  printf("%c",stack1[i]);
       }
       while((cher=pop(0))!=NULL)
       {
	 printf("%c",cher);
       }
    }
