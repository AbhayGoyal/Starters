#include<stdio.h>
#include<conio.h>
   struct link
   {
     int val;
     struct link *next;
   }node;
   struct link *root=NULL;

   struct link2
   {
     int val;
     struct link2 *next;
   }node2;
   struct link2 *root2=NULL;

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
	 return;
      }
      while(t->next!=NULL)
      {
	 t=t->next;
      }
      t->next=temp;
      printf("Value entered\n");

   }
    void inserttwo()
   {
   struct link2 *temp,*t;		 int num,i;
      printf("Enter the number of values");
      scanf("%d",&num);
      for(i=1;i<=num;i++)
	  create();

       printf("Now for the second list");
      t=root2;
      temp=(struct link2 *)malloc(sizeof(node2));
      printf("Enter the value for new node");
      scanf("%d",&temp->val);
      if(root2==NULL)
      {
	 root2=temp;
	 printf("Node made\n");
	 return;
      }
      while(t->next!=NULL)
      {
	 t=t->next;
      }
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
      while(t!=NULL)
      {
	printf("%d \n",t->val);
	t=t->next;
      }
   }
   void disp2()
   {
      struct link2 *t;
      t=root2;
      if(root2==NULL)
      {
	printf("List does not exist");
	return;
      }
      while(t!=NULL)
      {
	printf("%d \n",t->val);
	t=t->next;
      }
   }
   void main()
   {
     clrscr();
     while(1)
     {
     printf("1.Enter values in first list\n 2.Enter values in second list\n");
     printf("3.Display values of first list\n 4.Display values of second") ;
     printf("4.Merge sort\n 5.Cocatenate\n 6.Exit");
     scanf("")



     }

   }