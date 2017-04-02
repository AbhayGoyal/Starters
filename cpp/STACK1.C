#include<stdio.h>
#include<conio.h>
   struct skt
   {
     int arr[5];
     int top;
   }s;

   void push(int v)
   {
      if(s.top==5)
      {
	printf("Overflow");
	return;
      }
      s.top++;
	s.arr[s.top]=v;
	printf("Value has been entered\n");
	return;
   }
int pop()
   {    int p;
      if(s.top==-1)
      {
	printf("Underflow");
	return 0;
      }
      p=s.arr[s.top];
      s.top--;
      return p;

   }
   int peep()
   {
     int p;
     if(s.top==-1)
     {
       printf("Underflow");
       return 0;
     }
     p=s.arr[s.top];
     return p;

   }
   void main()
      {
	int ch,val,v;
	clrscr();
      while(1){
	printf("\n1.Push a value");
	printf("\n2.Pop a value");
	printf("\n3.Peep a value");
	printf("\n4.Exit\n");
	printf("Enter a value\n");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:
	    printf("Enter the value\n");
	    scanf("%d",&val);
	    push(val);
	    getch();
	    break;
	  case 2:
	    v=pop();
	    if(v==0)
	    printf("No value in stack\n");
	    printf("The value is:- %d\n",v);
	    getch();
	    break;
	  case 3:
	    v=peep();
	    if(v==0)
	    {
	      printf("No value in stack\n");
	    }
	    printf("%d",v);
	    break;
	  case 4:
	    return;
	}

	}
	}

