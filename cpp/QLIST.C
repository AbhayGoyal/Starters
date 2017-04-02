#include<stdio.h>
#include<conio.h>
#include<alloc.h>
   struct link
   {
     int val;
     struct link *next;
   }node;
   struct link *root=NULL;
   struct link *front=NULL;
   struct link *rear=NULL;

   void rearop()
   {
     struct link *t,*temp;
     printf("Enter the value");
     temp=(struct link *)malloc(sizeof(node));
     scanf("%d",&temp->val);
     temp->next=NULL;
     if(root==NULL)
     {
	 root=temp;
	 printf("Value queued\n");
	 return;
     }
     t=root;
     while(t->next!=NULL)
     {
	t=t->next;
     }
     t->next=temp;
     printf("Value queued\n");
     rear=t;
   }

   void disp()
   {
       struct link *t;
       t=root;
       while(t!=NULL)
       {
	 printf("%d\n",t->val);
	 t=t->next;
       }
       //printf("%d\n",t->val);

   }

   void frontop()
   {
      root=root->next;
      front=root;
      if(root==NULL)
	printf("Sorry no list");
      printf("Value removed\n");
   }

   void main()
   {
     int ch;
     clrscr();
     while(1)
     {

	printf("1.Enter value in queue\n2.Display values in queue\n");
	printf("3.Delete a value from queue\n4.Exit");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:
	    rearop();
	    break;
	  case 2:
	    disp();
	    break;
	  case 3:
	    frontop();
	    break;
	  case 4:
	    return;
	}
     }

   }