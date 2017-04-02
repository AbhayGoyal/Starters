#include<stdio.h>
#include<conio.h>
   //create,disp,after,before,del
   struct link
   {
     int val;
     struct link *next;
   }node;
   struct link *root=NULL;

     void create()
   {
      struct link *temp,*t;
      t=root;
      temp=(struct link *)malloc(sizeof(node));
      printf("Enter the value for new node");
      scanf("%d",&temp->val);
      if(root==NULL)
      {
	 root=temp;
	 printf("Node made\n");
	 root->next=root;
	 return;
      }

      {
	  do
	  {
	    t=t->next;
	  }while(t->next!=root);

      }
	 temp->next=root;
	 t->next=temp;
      printf("Value entered\n");

   }
   void disp()
   {
      struct link *t;
      t=root;
      if(root==NULL)
      {
	printf("List does not exist");
	return;
      }

      do
      {
	printf("%d \n",t->val);
	t=t->next;
      }while(t!=root);
   }
   void insa()
   {
     struct link *temp,*t;int ch;
     t=root;
     if(root==NULL)
     {
       printf("Create a list");
       return;
     }
     printf("Enter the value after which the entered value is to be:\n");
     scanf("%d",&ch);

     while(t->val!=ch && t->next!=root)
     {
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found");
       return;
     }
     temp=(struct link *)malloc(sizeof(node));
     printf("Enter the value");
     scanf("%d",&temp->val);
     temp->next=t->next;
     t->next=temp;

   }

   void insb()
   {
     struct link *p,*temp,*t,*t1;int ch;
     t=root;
     t1=t->next;
     if(root==NULL)
     {
       printf("Create a list");
       return;
     }
     printf("Enter the value after which the entered value is to be:\n");
     scanf("%d",&ch);
     temp=(struct link *)malloc(sizeof(node));
     printf("Enter the value");
     scanf("%d",&temp->val);
     t=root;

     while(t->val!=ch&&t->next!=root)
     {
       p=t;
       t=t->next;
     }
     if(t==root)
     {
       t1=root;
       while(t1->next!=root)
       {
	 t1=t1->next;
       }
       temp->next=root;
       root=temp;
       t1->next=root;
     }
     else
     {
       temp->next=t;
       p->next=temp;
     }
     printf("Value entered");

     }
   void del()
   {
      struct link *t;int ch;
      t=root;

      printf("Enter the value to be deleted");
      scanf("%d",&ch);
      while(t->next->val!=ch && t->next!=root)
      {
	t=t->next;
      }
      if(t->next->val==ch)
      {
	if(t==root)
	{
	   t->next=t->next->next;
	   root=t->next->next;
	}
	else
	{
	    t->next=t->next->next;
	}
      }
      else
      {
	t=t->next;
      }
      printf("Value deleted");

  }

       void main()
      {
	int ch;
	clrscr();
	while(1)
	{
	printf(" 1.Creating a new node\n 2.Display nodes\n");
	printf(" 3.Inserting a node after position \n");
	printf(" 4.Inserting a node before position entered \n");
	printf(" 5.Deleting a node on th position \n");
	printf(" 6.Exit\n");
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