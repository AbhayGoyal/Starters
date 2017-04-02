#include<stdio.h>
#include<conio.h>
#include<alloc.h>
   struct link
   {
     int val;
     struct link *next;
   }node;
   struct link *rootl=NULL;
   struct link *rootc=NULL;

  /* struct doublel
   {
     int val;
     struct doublel *prev;
     struct doublel *next;
   }nodel;
   struct doublel *rootl;*/

   struct link * create(struct link *root)
   {
   struct link *t,*temp;
   t=root;
   temp=(struct link *)malloc(sizeof(node));
   printf("Enter new node info");
   scanf("%d",&temp->val);
   temp->next=NULL;
      if(root==NULL)
      {
	root=temp;
	 printf("Node made\n");
	 return root;
      }
      while(t->next!=NULL)
      {
	 t=t->next;
      }
      t->next=temp;
      printf("Value entered\n");
      return root;

     }
   void disp(struct link *root)
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

   void main()
   {
    int ch;
    clrscr();

    while(1)
    {
      printf("1.Create 1 \n2.Create 2\n 3.Display 1\n 4.Display 2\n ");
      scanf("%d",&ch);
      switch(ch)
      {
	case 1:
	rootl= create(rootl);break;
	case 2:
	rootc=create(rootc);
	case 3:
	 disp(rootl);break;
	case 4:
	 disp(rootc);break;
	case 5:
	 return;
      }
    }
   }
