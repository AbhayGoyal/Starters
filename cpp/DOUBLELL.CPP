#include<stdio.h>
#include<alloc.h>
#include<conio.h>
   struct doublel
   {
     int val;
     struct doublel *prev;
     struct doublel *next;
   }node;
   struct doublel *root;

   void create()
   {
     struct doublel *temp,*t;
     temp=(struct doublel *)malloc(sizeof(node));
     printf("Enter the value");
     scanf("%d",&temp->val);
     temp->next=NULL;
     temp->prev=NULL;
     if(root==NULL)
     {
	root=temp;
	printf("Node made\n");
	return;
     }
     t=root;
     while(t->next!=NULL)
     {
       t=t->next;
     }
      temp->prev=t;
      t->next=temp;
      printf("Value entered\n");
   }

   void disp()
   {
     struct doublel *t;
     t=root;
     if(root==NULL)
     {
       printf("List is empty\n");
       create();
     }
     while(t!=NULL)
     {
       printf("%d \n",t->val);
       t=t->next;
     }
   }
   void insa()
   {
     struct doublel *t,*temp; int ch;
     printf("Enter the value after which you want to enter the value\n");
     scanf("%d",&ch);
     t=root;
     while(t->next!=NULL && t->val!=ch)
     {
	t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found\n");
       return;
     }
     printf("Enter the data");
     temp=(struct doublel *)malloc(sizeof(node));
     scanf("%d",&temp->val);
     t->next->prev=temp;
     temp->next=t->next;
     temp->prev=t->next;
     t->next=temp;
     printf("Value entered\n");
   }
   void insb()
   {
     struct doublel *t,*p,*temp;
     printf("Enter the value after which data has to be entered:");int ch;
     scanf("%d",&ch);
     t=root;
     while(t->next!=NULL && t->val!=ch)
     {     p=t;
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found");
     }
     printf("Enter the data:");
     temp=(struct doublel *)malloc(sizeof(node));
     scanf("%d",&temp->val);
     temp->next=t;
     temp->prev=p;
     p->next=temp;
     t->prev=temp;
     printf("Value inserted");

   }
   void dela()
   {
     struct doublel *t;int ch;
     printf("Enter the value after which data is to be deleted\n");
     scanf("%d",&ch);
     t=root;
     while(t->next!=NULL && t->val!=ch)
     {
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found\n");
       return;
     }
     t->next=t->next->next;
     t->next->next->prev=t;
     printf("Value deleted");
   }
   void delb()
   {
     struct doublel *t;int ch;
     t=root;
     printf("Enter the value before which the data has to be deleted");
     scanf("%d",&ch);
     while(t->next!=NULL && t->val!=ch)
     {
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found");
       return;
     }
     if(t->prev==NULL)
     {
       printf("List deleted\n");
       root=NULL;
       return;
     }
     if(t->prev->prev==NULL)
     {
       t->prev=NULL;
       root=t;
       return;
     }
     t->prev->prev->next=t;
     t->prev=t->prev->prev;
     printf("Value deleted\n");
   }

   void main()
      {          int ch;
	clrscr();
	while(1)
	{
	printf("1.Enter values\n 2.Display values\n");
	printf("3.Enter a value after\n 4.Enter a value before\n");
	printf("5.Delete after\n 6.Delete before\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	      case 1:
	      create();
	      break;
	      case 2:
	      disp();
	      break;
	      case 3:
	      insa();
	      break;
	      case 4:
	      insb();
	      break;
	      case 5:
	      dela();
	      break;
	      case 6:
	       delb();
	       break;
	      case 7:
	      return;
	    }
	}
      }