#include<stdio.h>
#include<conio.h>
#include<alloc.h>
     struct link
   {
     int val;
     struct link *next;
   }node;

   struct link *root=NULL;
   struct link *root1=NULL;

   void create(struct link *root)
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

	while(1)
	{
	 printf("1.Enter the first list\n 2.Enter the second list\n ");
	 printf("3.Display the first list\n 4. Display the second list\n ");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	   case 1:
	    create(root);
	    break;
	   case 2:
	    create(root1);
	    break;
	   case 3:
	    disp(root);
	    break;
	   case 4:
	    disp(root1);
	    break;
	 }

	}

      }