#include<stdio.h>
#include<conio.h>
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
  void delduplicate()
   {
     struct link *i,*j,*p;int c;
     i=root;
     for(;i->next->next!=NULL;i=i->next)
     {
       c=i->val;
       j=i->next;
       while(j->next!=NULL)
       {
	 if(j->val==c)
	 {
	   p->next=j->next;
	   break;
	 }
	 p=j;
	 j=j->next;
       }
	if(j->next==NULL)
	{
	   if(j->val==c)
	   {
	     p->next='\0';
	   }

	}

     }
     if(i->next->next==NULL)
	{
	   c=i->val;
	   j=i->next;
	   if(j->val==c)
	   {
	     p->next='\0';
	   }
	}
    printf("Same values deleted");
   }

   void main()
      {
	int c;
	while(1)
	{
	printf(" 1.Create list\n 2.Display list\n 3.Delete duplicate \n");
	scanf("%d",&c);
	switch(c)
	{
	  case 1:
	    create();break;
	  case 2:
	    disp();break;
	  case 3:
	    delduplicate();break;
	  case 4:
	    return;
	}
      }