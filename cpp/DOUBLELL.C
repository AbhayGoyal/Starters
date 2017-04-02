#include<stdio.h>
#include<conio.h>
#include<alloc.h>
   struct dll
   {
      int val;
      struct dll *next;
      struct dll *prev;
   }node;
   struct dll *root=NULL;

   void insertbeg()
   {
      struct dll *temp;
      //t=root;
      printf("Enter the value");
      temp=(struct dll *)malloc(sizeof(node));
      scanf("%d",&temp->val);
      temp->next=NULL;
      temp->prev=NULL;
      if(root==NULL)
      {
	 root=temp;
	 printf("Node made\n");
	 return;
      }
      root->prev=temp;
      temp->next=root;
      root=temp;
      printf("Value entered\n");
   }

   void disp()
   {
     struct dll *t;
     t=root;
     while(t!=NULL)
     {
	printf("%d\n",t->val);
	t=t->next;
     }
   }

   void insertafter()
   {
      struct dll *t,*temp; int v,flag=0;
      t=root;
      printf("Enter the value after which value is to be inserted");
      scanf("%d",&v);
      while(t!=NULL)
      {
	if(t->val==v)
	{
	   flag=1;
	   break;
	}
	t=t->next;
      }
      if(flag==0)
      {
	 printf("Sorry no such element found");
	 return;
      }
      temp=(struct dll *)malloc(sizeof(node));
      temp->next=NULL;temp->prev=NULL;
      printf("Enter the value to be inserted");
      scanf("%d",&temp->val);
      temp->prev=t;
      temp->next=t->next;
      t->next=temp;
      t->next->prev=temp;
      printf("Value entered");
   }

   void delend()
   {
      struct dll *t;
      t=root;
      while(t->next!=NULL)
      {
	 t=t->next;
      }
      t->prev->next=NULL;
      printf("Value deleted\n");
   }

   void delprev()
   {
      struct dll *t;int flag=0,v;
      t=root;
      printf("Enter the value before which value has to be deleted ");
      scanf("%d",&v);
      if(v==root->val)
      {
	root=root->next;
	printf("Value deleted\n");
	return;
      }
      while(t!=NULL)
      {
	 if(t->val==v)
	 {
	     flag=1;
	     break;
	 }
	 t=t->next;
      }
      if(flag==0)
      {
	printf("Value not found\n");
	return;
      }
      t->prev->prev->next=t;
      t->prev=t->prev->prev;
      printf("Value deleted\n");
   }

   void main()
   {
      int ch;
      clrscr();
      while(1)
      {
	  printf("1.Insert in beginning\n2.Display\n3.Insert after given node");
	  printf("\n4.Delete before a given node\n5.Delete from end");
	  printf("\n6.Exit\nEnter your choice");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	    case 1:
	      insertbeg();
	      break;
	    case 2:
	      disp();
	      break;
	    case 3:
	      insertafter();
	      break;
	    case 4:
	       delprev();
	       break;
	    case 5:
	       delend();
	       break;
	    case 6:
	       return;

	  }
      }
   }