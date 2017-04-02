#include<stdio.h>
#include<conio.h>
#include<alloc.h>
  struct link
  {
     int val;
     struct link *next;
  }node;
  struct link *root=NULL;

  void push()
  {
     struct link *temp;
     printf("Enter the value");
     temp=(struct link *)malloc(sizeof(node));
     scanf("%d",&temp->val);
     temp->next=NULL;
     if(root==NULL)
     {
	root=temp;
	printf("Value pushed\n");
	return;
     }
     temp->next=root;
     root=temp;
     printf("Value pushed\n");
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
  }

  void pop()
  {
       if(root==NULL)
       {
	 printf("Enter list first");
	 return;
       }
       printf("Value popped is %d\n",root->val);
       root=root->next;
  }

  void peep()
  {
     printf("%d",root->val);

  }

  void main()
  {
    int ch;
    clrscr();
    while(1)
    {
      printf("1.Push\n2.Display\n3.Pop\n4.Peep\n5.Exit");
      printf("\nEnter your choice");
      scanf("%d",&ch);
      switch(ch)
      {
	 case 1:
	   push();
	   break;
	 case 2:
	   disp();
	   break;
	 case 3:
	   pop();
	   break;
	 case 4:
	   peep();
	   break;
	 case 5:
	   return;

      }
    }
  }
