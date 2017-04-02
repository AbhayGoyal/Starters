#include<stdio.h>
#include<conio.h>
#include<alloc.h>
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
   void addbp()
   {
     struct link *t,*temp,*p;int ch,d=0;
     t=root;
     temp=(struct link*)malloc(sizeof(node));
     scanf("%d",&temp->val);
     if(t==NULL)
     {
       printf("No list.Create a list");
       return;
     }
     printf("Enter the position");
     scanf("%d",&ch);
     while(t!=NULL)
     {
       d++;
       t=t->next;
     }
     printf("%d",d);
     while(d<ch)
     {
	    p=t;
	    t=t->next;
	    if(t==NULL)
	    {
	       printf("Wrong value entered");
	       return;
	    }
	    d++;
     }

	     printf("Enter the value");
	     scanf("%d",&temp->val);

	     if(t==root)
	     {
	       temp->next=root;
	       root=temp;
	     }
	     else
	     {
	       temp->next=t;
	       temp1->next=temp;
	     }
	     printf("Value added\n");
	     return;
	  }

   void addav()
   { int v,v1;
      struct link *t,*temp;
     printf("Enter the value before which you want to enter");
     scanf("%d",v);

     t=root;
     while(t->val!=v && t->next!=NULL)
	t=t->next;
     while(t->val!=v)
     {
	printf("No value found");
	return;
     }
     temp=(struct link*)malloc(sizeof(node));
     printf("Enter the value");
     scanf("%d",v1);
     temp->next=t->next;
     t->next=temp;
   }

   void addap()
   {
     struct link *t,*temp,*temp1;int ch,d=1;
     if(root==NULL)
     {
       printf("List does not exist.Create list.");
       create();
       return;
     }
     printf("Enter the value the position");
     scanf("%d",&ch);
     while(d<ch)
     {
       temp1=t;
       t=t->next;
       d++;
     }
	temp=(struct link *)malloc(sizeof(node));
	printf("Enter the value");
	scanf("%d",temp->val);
	 temp->next=t;
	 temp1->next=temp;
   }

   void addbv()
   {  int v,v1;
       struct link *t,*temp,*p;
     printf("Enter the value before which you want to enter");
     scanf("%d",v);

     t=root;
     if(t->val!=v && t->next!=NULL)
     {
	 p=t;
	 t =t->next;
     }
     if(t->val!=v)
     {
       printf("Value not found");
       return;
     }
     temp=(struct link *)malloc(sizeof(node));
     temp->next=t;
     p->next=temp;
   }

   void del()
   {
     struct link *t,*temp,*temp1;int ch,d=0;
     if(root==NULL)
     {
	printf("No list yet.");
	create();
     }
     t=root;
      printf("Enter the position to be deleted");
      scanf("%d",&ch);
      while(t->next!=NULL)
      {
	temp=t;
	t=t->next;
	d++;
	if(d==ch+1){
	  temp1=t;
	  break;}
      }
	temp->next=temp1->next;
   }

      void main()
      {
	int ch;
	clrscr();
	while(1)
	{
	printf(" 1.Enter a new node\n 2.Display\n 3.Add after using position\n");
	printf(" 4.Add before using position\n 5.Add before using value\n");
	printf(" 6.Add after using value\n");
	printf(" 7.Delete\n 8.Exit\n Enter your choice\n");

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
	     addbp();
	     break;
	    case 4:
	     addap();
	     break;
	    case 5:
	     addbv();
	     break;
	    case 6:
	     addav();
	     break;
	    case 7:
	     del();
	     break;
      //	    case 8:
     //	      reverse();
       //	      break;
	    case 15:
	    return;
	  }


}
	}
