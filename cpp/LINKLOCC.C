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

   void insonnoccurb()
   {
      struct link *t,*temp,*p; int ch,v,flag=0;
      printf("Enter the value and occurence");
      scanf("%d%d",&ch,&v);
      t=root;
      while(t!=NULL)
      {
	if(ch==t->val)
	{
	   flag++;
	   if(flag==v)
	   break;
	}
	p=t;
	t=t->next;
      }
      if(t==NULL && flag!=v)
      {
	printf("No value found");
	return;
      }
      temp=(struct link *)malloc(sizeof(node));
      printf("Enter the value");
      scanf("%d",&temp->val);
      p->next=temp;
      temp->next=t;
      printf("Value inserted") ;
   }
   void insonnoccura()
   {
      struct link *t,*temp; int ch,v,flag=0;
      printf("Enter the value and occurence");
      scanf("%d%d",&ch,&v);
      t=root;
      while(t!=NULL)
      {
	if(ch==t->val)
	{
	   flag++;
	   if(flag==v)
	   break;
	}

	t=t->next;
      }
      if(t==NULL || flag!=v)
      {
	printf("No value found");
	return;
      }
      temp=(struct link *)malloc(sizeof(node));
      printf("Enter the value");
      scanf("%d",&temp->val);
      temp->next=t->next;
      t->next=temp;
      printf("Value inserted") ;

   }
   void delonnoccur()
   {
      struct link *t,*temp; int ch,v,flag=0;
      printf("Enter the value and occurence");
      scanf("%d%d",&ch,&v);
      t=root;
      while(t!=NULL)
      {
	if(ch==t->val)
	{
	   flag++;
	   if(flag==v)
	   break;
	}
	temp=t;
	t=t->next;
      }
      if(t==NULL || flag!=v)
      {
	printf("No value found");
	return;
      }
      temp->next=t->next;
      printf("Value deleted");
   }
   void delallsameoccur()
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
	//   j->next->next->next=j;
	   break;
	 }
	 p=j;
	 j=j->next;
       }
	if(j->next==NULL)
	{
	   if(j->val==c)
	   {
	     i->next='\0';
	   }

	}

     }
     if(i->next->next==NULL)
	{
	   j=i->next;
	   c=i->val;
	   if(j->val==c)
	   {
	     i->next=NULL;
	   }
	}
    printf("Same values deleted");
   }

    void main()

      {
	int ch;
	clrscr();
	while(1)
	{
	printf(" 1.Creating a new node\n 2.Display nodes\n");
	printf(" 3.Inserting a node before position \n");
	printf(" 4.Inserting a node after position entered \n");
	printf(" 5.Deleting a node on nth position \n");
	printf(" 6.Deleting duplicate nodes\n 7.Exit\n");
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
	     insonnoccurb();
	     break;
	    case 4:
	     insonnoccura();
	     break;
	    case 5:
	      delonnoccur();
	      break;
	    case 6:
	      delallsameoccur();
	      break;
	    case 7:
	    return;
	  }

	}

      }