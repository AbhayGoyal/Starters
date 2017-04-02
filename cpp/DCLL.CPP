#include<stdio.h>
#include<alloc.h>
#include<conio.h>
   struct link
   {
     int val;
     struct link *prev;
     struct link *next;
   }node;
   struct link *root;

   void create()
   {
     struct link *t,*temp;
     t=root;
     temp=(struct link *)malloc(sizeof(node));
     printf("Enter the value");
     scanf("%d",&temp->val);
     if(root==NULL)
     {
       root=temp;
       root->next=root;
       root->prev=root;
       printf("Node made");
       return;
     }
     while(t->next!=root)
     {
       t=t->next;
     }
     t->next=temp;
     temp->prev=t;
     temp->next=root;
     printf("Value added");
   }

   void disp()
   {
     struct link *t;
     t=root;
     if(root==NULL)
     {
       printf("List empty");
       return;
     }
     while(t->next!=root)
     {
	printf("%d \n",t->val);
	t=t->next;
     }
     printf("%d \n",t->val);

   }

   void insa()
   {
     struct link *t,*temp;int ch;
     t=root;
     printf("Enter your the value after which you want to enter the data");
     scanf("%d",&ch);
     while(t->next!=root && t->val!=ch)
     {
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found");
       return;
     }
     printf("Enter the data");
     temp=(struct link *)malloc(sizeof(node));
     scanf("%d",&temp->val);
    /* t->next->prev=temp;
     temp->next=t->next;
     temp->prev=t->next;
     t->next=temp;*/
     temp->next=t->next;
     temp->prev=t;
     t->next->prev=temp;
     t->next=temp;
     printf("Value entered\n");
   }

   void insb()
    {
      struct link *t,*temp;int ch;
      t=root;
      printf("Enter the value before which you want to enter the data");
      scanf("%d",&ch);
      if(root==NULL)
      {
	printf("List empty");
	return;
      }
      while(t->next!=root && t->val!=ch)
      {
	t=t->next;
      }
      if(t->val!=ch)
      {
	printf("Value not found");
	return;
      }
      printf("Enter the value");
      temp=(struct link *)malloc(sizeof(node));
      scanf("%d",&temp->val);
      if(t->val==ch && t==root)
      {
	t->prev=temp;
	temp->prev=t->prev;
	temp->next=t;
	t->prev->next=temp;
	root=temp;
	printf("Value entered");
	return;
      }
      temp->next=t;
      temp->prev=t->prev->next;
      t->prev->next=temp;
      t->prev=temp;
      printf("Value entered\n");
    }
    void del()
    {
      struct link *t;int ch;
      t=root;
      printf("Enter the value to be deleted");
      scanf("%d",&ch);
      if(root==NULL)
      {
	printf("List empty");
	return;
      }
      while(t->next!=root && t->val!=ch)
      {
	t=t->next;
      }
      if(t->val!=ch)
      {
	  printf("Value not found");
	  return;
      }
      if(t==root && t->val==ch)
      {
	t->next->prev=t->prev;
	t->prev->next=t->next;
	root=t->next;
	if(t->prev=root && t->next==root)
	{
	  root=NULL;
	}
	printf("Done");
	return;

      }

    /* if(t->val==ch && t->next!=root)
      {
	t->next->prev=t->prev;
	t->prev->next=t->next;
	root=t->next;
	return;
       /*	t->next->prev=t->next;
	t->next->next=t->next;
	root=t->next;
	printf("Value deleted");
	return;
      } */
      t->prev->next=t->next;
      t->next->prev=t->prev;
      printf("Value deleted");
    }


   void main()
      {
      int ch;
      clrscr();
      while(1)
      {
	printf("1.Create list\n 2.Display list\n 3.Insert after\n");
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
	   del();
	   break;
	  case 6:
	   return;
	}
      }

      }