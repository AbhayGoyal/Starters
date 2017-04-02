#include<stdio.h>
#include<conio.h>

   struct vertex
   {
      int val1;
      struct vertex *left;
      struct vertex *right;
   }vert;

   struct vertex *rootvert=NULL;

   struct connect
   {
      int val2;
      struct connect *next;
   }conn;

   struct connect *rootconn=NULL;

   void createvertex()
   {
       struct vertex *temp,*t;
       temp=(struct vertex *)malloc(sizeof(vert));
       printf("Enter the value of new vertex\n");
       scanf("%d",&temp->val1);
       temp->left=NULL;
       temp->right=NULL;
       if(rootvert==NULL)
       {
	   rootvert=temp;
	   printf("Value entered\n");
	   return;
       }
       t=rootvert;
       while(t->left!=NULL)
       {
	  if(t->val1==temp->val1)
	  {
	    printf("Sorry value already present\n");
	    return;
	  }
	  t=t->left;
       }
       if(t->val1==temp->val1)
       {
	   printf("Sorry value already present\n");
	   return;
       }
       t->left=temp;
       printf("Value entered\n");
   }

   void dispvert()
   {
      struct vertex *t;
      t=rootvert;
      while(t!=NULL)
      {
	 printf("%d\n",t->val1);
	 t=t->left;
      }
   }

   void createconnect()
   {
      struct connect *temp,*t1;int val,flag=0;
      struct vertex *t;
      printf("Enter the origin ");
      scanf("%d",&val);
      if(rootvert==NULL)
      {
	 printf("Sorry no vertex.Please create a vertex first\n");
	 return;
      }
      t=rootvert;
      while(t!=NULL)
      {
	if(t->val1==val)
	{
	   flag=1;
	   break;
	}
	else
	   t=t->left;
      }
      if(flag==1)
      {
	 printf("Enter the destination ");
	 temp=(struct connect *)malloc(sizeof(conn));
	 temp->next=NULL;
	 scanf("%d",&temp->val2);
	 if(t->right==NULL)
	 {
	    t->right=temp;
	    return;
	 }
	 else
	 {
	   t1=t->right;
	   while(t1->next!=NULL)
	   {
	      t1=t1->next;
	   }
	   t1->next=temp;
	 }
      }
      if(flag==0)
      {
	printf("Value not found\n");
	return;
      }
   }

   void disptotal()
   {
     struct vertex *t;struct connect *t1;
     t=rootvert;
     while(t!=NULL)
     {
	printf("\t%d-->",t->val1);
	if(t->right!=NULL)
	{
	  t1=t->right;
	  while(t1!=NULL)
	  {
	    printf("%d,",t1->val2);
	    t1=t1->next;
	  }
	}
	printf("\n");
	t=t->left;
     }
   }

   void delvertex()
   {
      struct vertex *t;int ch;
      t=rootvert;
      printf("Enter the value to be deleted\n");
      scanf("%d",&ch);
      while(t!=NULL)
      {
	 if(t->left->val1==ch)
	   t->left=NULL;
	 t=t->left;
      }
      printf("Vertex %d deleted",ch);
   }

   void deledge()
   {
      struct connect *t;struct vertex *t1;int origin,des,flag=0;int flag1=0;
      t1=rootvert;
      printf("Enter the origin ");
      scanf("%d",&origin);
      while(t1!=NULL)
      {
	  if(t1->val1==origin)
	  {
	     flag=1;break;
	  }
	  t1=t1->left;
      }
      if(flag==0)
      {
	printf("Sorry origin entered does not exist\n");
	return;
      }
      if(flag==1)
      {
	 printf("Enter destination ");
	 scanf("%d",&des);
	 t=t1->right;
	 while(t!=NULL)
	 {
	    if(t->val2==des)
	    {
	      t1->right=t->next;
	      printf("\tEdge deleted\n");
	      return;
	    }
	    if(t->next->val2==des)
	    {
	       flag1=1;break;
	    }
	 }
	 if(flag1==1)
	 {
	    t->next=t->next->next;
	    printf("\tEdge deleted\n");
	    return;
	 }
	 if(flag1==0)
	 {
	   printf("\tSorry wrong destiantion\n");
	   return;
	 }
      }
   }

   void main()
   {
     int ch;
      clrscr();
      while(1)
      {
	 printf("1.Making a new vertex\n2.Displaying vertices\n3.Making edges\n");
	 printf("4.Displaying everything\n5.Delete Vertex\n6.Delete edge\n");
	 printf("7.Exit\n");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	    case 1:
	       createvertex();
	       break;
	    case 2:
	       dispvert();
	       break;
	    case 3:
	       createconnect();
	       break;
	    case 4:
	       disptotal();
	       break;
	   case 5:
	       delvertex();
	       break;
	   case 6:
	       deledge();
	       break;
	   case 7:
	       return;
	 }
     }
   }