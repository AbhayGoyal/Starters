#include<stdio.h>
#include<alloc.h>
#include<conio.h>
  struct link
  {
    int val;
    struct link *next;
  }node;
  struct link *root;

  void push()
  {
    struct link *temp=root;
    temp=(struct link *)malloc(sizeof(node));
    printf("Enter the value");
    scanf("%d",&temp->val);
    if(root==NULL)
    {
       temp->next=NULL;
       root=temp;
       printf("Node made\n");
       return;
    }
    temp->next=root;
    root=temp;
    printf("Value entered\n");
  }
  void peepall()
  {
     struct link *t;
     t=root;
     while(t!=NULL)
     {
       printf("%d \n",t->val);
	t=t->next;
     }

  }
  void pop()
  {
    struct link *t;
    t=root;
    root=t->next;
    printf("Value has been popped");

  }


  void main()
  {
    int ch;
    clrscr();
    while(1)
    {
      printf("1.Push the values\n 2.Peep the values\n 3.Pop the values\n");
      scanf("%d",&ch);
      switch(ch)
      {
	case 1:
	push();
	break;
	case 2:
	peepall();
	break;
	case 3:
	pop();
	break;
	case 4 :
	return;
      }

    }


  }

