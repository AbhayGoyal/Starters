#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct skt
   {
     int arr[5];
     int top;
   }s;

   void push(int v)
   {
      if(s.top==5)
      {
	printf("Overflow");
	return;
      }
      s.top++;
	s.arr[s.top]=v;
	printf("Value has been entered\n");
	return;
   }
int pop()
   {    int p;
      if(s.top==-1)
      {
	printf("Underflow");
	return 0;
      }
      p=s.arr[s.top];
      s.top--;
      return p;

   }
   int peep()
   {
     int p;
     if(s.top==-1)
     {
       printf("Underflow");
       return 0;
     }
     p=s.arr[s.top];
     return p;

   }

   struct link
   {
     int val;
     struct link *next;
   }node;
   struct link *root=NULL;
   struct link *rootc=NULL;
   struct link *root1=NULL;
  // struct link *rootdouble=NULL;
  // struct link *rootdoublec=NULL;
   struct link *rootsort=NULL;
   struct link1
 {
  int exp;
  int coeff;
  struct link1 *next;
 }node1;
 struct link1 *roota;
 struct link1 *root1a;
 struct link1 *root2a;

   struct doublel
   {
     int val;
     struct doublel *prev;
     struct doublel *next;
   }nodel;
   struct doublel *rootl=NULL;
   struct doublel *rootdoublec=NULL;

   struct links
  {
    int val;
    struct links *next;
  }nodes;
  struct links *roots;

  void pushs()
  {
    struct links *temp=roots;
    temp=(struct links *)malloc(sizeof(nodes));
    printf("Enter the value");
    scanf("%d",&temp->val);
    if(roots==NULL)
    {
       temp->next=NULL;
       roots=temp;
       printf("Node made\n");
       return;
    }
    temp->next=roots;
    roots=temp;
    printf("Value entered\n");
  }
  void peepalls()
  {
     struct links *t;
     t=roots;
     while(t!=NULL)
     {
       printf("%d \n",t->val);
	t=t->next;
     }

  }
  void pops()
  {
    struct links *t;
    t=roots;
    roots=t->next;
    printf("Value has been popped");

  }



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
     struct link *t,*temp,*temp1;int ch,d=0;
     temp=(struct link*)malloc(sizeof(node));
     t=root;
     if(t==NULL)
     {
       printf("No list.Create a list");
       create();
       return;
     }
     printf("Enter the position");
     scanf("%d",&ch);
     while(d<ch)
     {
	    temp1=t;
	    t=temp1->next;
	    if(t==NULL){
	    printf("Wrong value entered");
	       return;  }
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
   { int v;
      struct link *t,*temp;
     printf("Enter the value after which you want to enter");
     scanf("%d",&v);
     t=root;
     while(t->val!=v && t->next!=NULL)
     {
	t=t->next;
     }
     while(t->val!=v)
     {
	printf("No value found");
	return;
     }
     temp=(struct link *)malloc(sizeof(node));
     printf("Enter the value");
     scanf("%d",&temp->val);
     temp->next=t->next->next;
     t->next=temp;
     printf("Value entered");
   }

   void addap()
   {
  /*   struct link *t,*temp,*temp1;int ch,d=1;
     if(root==NULL)
     {
       printf("List does not exist.Create list.");
       create();
       return;
     }
     printf("Enter the value");
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
	 temp1->next=temp; */

   }
   void addbv()
   {
       int v,v1;
       struct link *t,*temp,*p;
     printf("Enter the value before which you want to enter");
     scanf("%d",&v);
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
     printf("Enter the value");
     scanf("%d",&temp->val);
     temp->next=t;
     p->next=temp;
     printf("Value entered");
   }

   void del()
   {
     struct link *t,*temp,*p;int ch;
     if(root==NULL)
     {
	printf("No list yet.");
	create();
     }
     t=root;
      printf("Enter the value to be deleted");
      scanf("%d",&ch);
      while(t->next!=NULL && t->val!=ch)
      {
	p=t;
	t=t->next;
      }
      if(t->val!=ch)
      {
	printf("Value not found");
	return;
      }
      if(root->val==ch)
      {
	  root=t->next;
	  return;
      }
      p->next=t->next->next;
     /* while(t->next!=NULL)
      {
	temp=t;
	t=t->next;
	d++;
	if(d==ch+1){
	  temp1=t;
	  break;}
      }
	temp->next=temp1->next;
       */
       printf("Value deleted");
   }

   void reverse()
   {
      struct link *t,*m,*p,*root1;
	 t=root;
	 m=root;
	 p=root;
      if(root==NULL)
      {
	printf("No list.Create list first");
	create();
      }
      while(t->next!=NULL)
      {
	p=t;
	t=t->next;
      }
      t->next=p;
      root1=t;
      while(m!=p)
      {
	while(m->next!=p)
	  m=m->next;
	p->next=m;
	p=m;
	m=root;
      }
      if(m==p)
	m->next=NULL;
      root=root1;
      free(root1);
     printf("List reversed");
   }
   void selsort()
   {
     struct link *i,*j; int temp;

	  i=root;
     for(;i->next->next!=NULL;i=i->next)
	 {
	 for(j=i->next;j->next!=NULL;j=j->next)
	  {
	    if(i->val>j->val)
	     {
	       temp=i->val;
	       i->val=j->val;
	       j->val=temp;
	     }
	   }
	     if(i->val>j->val)
	     {
	       temp=i->val;
	       i->val=j->val;
	       j->val=temp;

	     }
	     if(i->next->next==NULL)
	     {
	       j=i->next;
	       if(j->val<i->val)
	       {
		 temp=i->val;
		 i->val=j->val;
		 j->val=temp;

	       }

	     }
	  }

   }
  //circular list(all operations)
/*  #include<stdio.h>
  #include<conio.h>
   //create,disp,after,before,del
   struct link
   {
     int val;
     struct link *next;
   }node;
  */

  //Single circular LL
     void createc()
   {
      struct link *temp,*t;
      t=rootc;
      temp=(struct link *)malloc(sizeof(node));
      printf("Enter the value for new node");
      scanf("%d",&temp->val);
      if(rootc==NULL)
      {
	 rootc=temp;
	 printf("Node made\n");
	 rootc->next=rootc;
	 return;
      }

      {
	  do
	  {
	    t=t->next;
	  }while(t->next!=rootc);

      }
	 temp->next=rootc;
	 t->next=temp;
      printf("Value entered\n");

   }
   void dispc()
   {
      struct link *t;
      t=rootc;
      if(rootc==NULL)
      {
	printf("List does not exist");
	return;
      }

      do
      {
	printf("%d \n",t->val);
	t=t->next;
      }while(t!=rootc);
   }
   void insac()
   {
     struct link *temp,*t;int ch;
     t=rootc;
     if(rootc==NULL)
     {
       printf("Create a list");
       return;
     }
     printf("Enter the value after which the entered value is to be:\n");
     scanf("%d",&ch);

     while(t->val!=ch && t->next!=rootc)
     {
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found");
       return;
     }
     temp=(struct link *)malloc(sizeof(node));
     printf("Enter the value");
     scanf("%d",&temp->val);
     temp->next=t->next;
     t->next=temp;

   }

   void insbc()
   {
     struct link *p,*temp,*t,*t1;int ch;
     t=rootc;
     t1=t->next;
     if(rootc==NULL)
     {
       printf("Create a list");
       return;
     }
     printf("Enter the value before which the entered value is to be:\n");
     scanf("%d",&ch);
     temp=(struct link *)malloc(sizeof(node));
     printf("Enter the value");
     scanf("%d",&temp->val);
     t=rootc;

     while(t->val!=ch && t->next!=rootc)
     {
       p=t;
       t=t->next;
     }
     if(t==rootc)
     {
       t1=rootc;
       while(t1->next!=rootc)
       {
	 t1=t1->next;
       }
       temp->next=t1->next;
       t1->next=temp;
       rootc=temp;
     }
     else
     {
       temp->next=t;
       p->next=temp;
     }
     printf("Value entered");

     }
   void delc()
   {
      struct link *t;int ch;
      t=rootc;

      printf("Enter the value to be deleted");
      scanf("%d",&ch);
      while(t->next->val!=ch && t->next!=rootc)
      {
	t=t->next;
      }
      if(t->next->val==ch)
      {
	if(t==rootc)
	{
	   t->next=t->next->next;
	   root=t->next->next;
	}
	else
	{
	    t->next=t->next->next;
	}
      }
      else
      {
	t=t->next;
      }
      printf("Value deleted");

  }
   //Double LL
   void createdouble()
   {
     struct doublel *temp,*t;
     temp=(struct doublel *)malloc(sizeof(nodel));
     printf("Enter the value");
     scanf("%d",&temp->val);
     temp->next=NULL;
     temp->prev=NULL;
     if(rootl==NULL)
     {
	rootl=temp;
	printf("Node made\n");
	return;
     }
     t=rootl;
     while(t->next!=NULL)
     {
       t=t->next;
     }
      temp->prev=t;
      t->next=temp;
      printf("Value entered\n");
   }

   void dispdouble()
   {
     struct doublel *t;
     t=rootl;
     if(rootl==NULL)
     {
       printf("List is empty\n");
       create();
     }
     while(t!=NULL)
     {
       printf("%d \n",t->val);
       t=t->next;
     }
   }
   void insadouble()
   {
     struct doublel *t,*temp; int ch;
     printf("Enter the value after which you want to enter the value\n");
     scanf("%d",&ch);
     t=rootl;
     while(t->next!=NULL && t->val!=ch)
     {
	t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found\n");
       return;
     }
     printf("Enter the data");
     temp=(struct doublel *)malloc(sizeof(nodel));
     scanf("%d",&temp->val);
     t->next->prev=temp;
     temp->next=t->next;
     temp->prev=t->next;
     t->next=temp;
     printf("Value entered\n");
   }
   void insbdouble()
   {
     struct doublel *t,*p,*temp; int ch;
     printf("Enter the value before which data has to be entered:");
     scanf("%d",&ch);
     t=rootl;
     while(t->next!=NULL && t->val!=ch)
     {     p=t;
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found");
     }
     printf("Enter the data:");
     temp=(struct doublel *)malloc(sizeof(nodel));
     scanf("%d",&temp->val);
     if(t->val==ch && t==rootl)
     {
	temp->next=rootl;
	temp->prev=NULL;
	t->prev=temp;
	rootl=temp;
	printf("Value enetred");
	return;
     }
     temp->next=t;
     temp->prev=p;
     p->next=temp;
     t->prev=temp;
     printf("Value inserted");

   }
   void deladouble()
   {
     struct doublel *t;int ch;
     printf("Enter the value after which data is to be deleted\n");
     scanf("%d",&ch);
     t=rootl;
     while(t->next!=NULL && t->val!=ch)
     {
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found\n");
       return;
     }
     t->next=t->next->next;
     t->next->next->prev=t;
     printf("Value deleted");
   }
   void delbdouble()
   {
     struct doublel *t;int ch;
     t=rootl;
     printf("Enter the value before which the data has to be deleted");
     scanf("%d",&ch);
     while(t->next!=NULL && t->val!=ch)
     {
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found");
       return;
     }
     if(t->prev==NULL)
     {
       printf("List deleted\n");
       rootl=NULL;
       return;
     }
     if(t->prev->prev==NULL)
     {
       t->prev=NULL;
       rootl=t;
       return;
     }
     t->prev->prev->next=t;
     t->prev=t->prev->prev;
     printf("Value deleted\n");
   }

  /* void main()
      {          int ch;
	clrscr();
	while(1)
	{
	printf("1.Enter values\n 2.Display values\n");
	printf("3.Enter a value after\n 4.Enter a value before\n");
	printf("5.Delete after\n 6.Delete before\n");
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
	      insa();
	      break;
	      case 4:
	      insb();
	      break;
	      case 5:
	      dela();
	      break;
	      case 6:
	       delb();
	       break;
	      case 7:
	      return;
	    }
	}
      }*/

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
   void createsort()
   {
     struct link *t,*temp,*p;
     printf("Enter the value");
     temp=(struct link *)malloc(sizeof(node));
     scanf("%d",&temp->val);
     t=rootsort;
     if(rootsort==NULL)
     {
       rootsort=temp;
       return;
     }
      while(t->next!=NULL)
      {
	      p=t;
	      t=t->next;
       if(temp->val<t->val)
       {

	 temp->next=t;
	 p->next=temp;
	 printf("Value entered");
	 return;
       }
       if(temp->val>t->val)
       {
	 temp->next=t->next->next;
	 t->next=temp;
	 printf("Value entered");
	 return;
       }
       if(temp->val==t->val)
       {
	 temp->next=t->next->next;
	 t->next=temp;
	 printf("Value entered");
	 return;
       }

     }
     if(t->next==NULL)
     {
	temp->next=t->next->next;
	t->next=temp;
	printf("Value entered");
     }
   }
   void dispsort()
   {
      struct link *t;
      t=rootsort;
      if(rootsort==NULL)
      {
	printf("List does not exist\n");
	return;
      }
      while(t!=NULL)
      {
	printf("%d \n",t->val);
	t=t->next;
      }
   }
      void createdoublec()
      {
	struct doublel *t,*temp;
	t=rootdoublec;
	temp=(struct doublel *)malloc(sizeof(nodel));
	printf("Enter the value");
	scanf("%d",&temp->val);
	if(rootdoublec==NULL)
	{
	  rootdoublec=temp;
	  rootdoublec->next=rootdoublec;
	  rootdoublec->prev=rootdoublec;
	  printf("Node made");
	  getch();
	  return;
	}
	while(t->next!=rootdoublec)
	{
	  t=t->next;
	}
	  temp->next=t->next;
	  t->next=temp;
	  temp->prev=t;
	  rootdoublec->prev=temp;
	  printf("Value added");
   }

   void dispdoublec()
   {
     struct doublel *t;
     t=rootdoublec;
     if(rootdoublec==NULL)
     {
       printf("List empty");
       return;
     }
     while(t->next!=rootdoublec)
     {
	printf("%d \n",t->val);
	t=t->next;
     }
     printf("%d \n",t->val);

   }

   void insadoublec()
   {
     struct doublel *t,*temp;int ch;
     t=rootdoublec;
     printf("Enter your the value after which you want to enter the data");
     scanf("%d",&ch);
     while(t->next!=rootdoublec && t->val!=ch)
     {
       t=t->next;
     }
     if(t->val!=ch)
     {
       printf("Value not found");
       return;
     }
     printf("Enter the data");
     temp=(struct doublel *)malloc(sizeof(nodel));
     scanf("%d",&temp->val);
    /* t->next->prev=temp;
     temp->next=t->next;
     temp->prev=t->next;
     t->next=temp;*/
     temp->next=t->next;
     temp->prev=t;
     t->next->prev=temp;
     t->next=temp;
     printf("Value entered\n");
   }

   void insbdoublec()
    {
      struct doublel *t,*temp;int ch;
      t=rootdoublec;
      printf("Enter the value before which you want to enter the data");
      scanf("%d",&ch);
      if(rootdoublec==NULL)
      {
	printf("List empty");
	return;
      }
      while(t->next!=rootdoublec && t->val!=ch)
      {
	t=t->next;
      }
      if(t->val!=ch)
      {
	printf("Value not found");
	return;
      }
      printf("Enter the value");
      temp=(struct doublel *)malloc(sizeof(nodel));
      scanf("%d",&temp->val);
      if(t->val==ch && t==rootdoublec)
      {
	t->prev=temp;
	temp->prev=t->prev;
	temp->next=t;
	t->prev->next=temp;
	rootdoublec=temp;
	printf("Value entered");
	return;
      }
      temp->next=t;
      temp->prev=t->prev->next;
      t->prev->next=temp;
      t->prev=temp;
      printf("Value entered\n");
    }
    void deldoublec()
    {
      struct doublel *t;int ch;
      t=rootdoublec;
      printf("Enter the value to be deleted");
      scanf("%d",&ch);
      if(rootdoublec==NULL)
      {
	printf("List empty");
	return;
      }
      while(t->next!=rootdoublec && t->val!=ch)
      {
	t=t->next;
      }
      if(t->val!=ch)
      {
	  printf("Value not found");
	  return;
      }
      if(t==rootdoublec && t->val==ch)
      {
	t->next->prev=t->prev;
	t->prev->next=t->next;
	rootdoublec=t->next;
	if(t->prev==rootdoublec && t->next==rootdoublec)
	{
	  root=NULL;
	}
	printf("Done");
	return;
      }

    /* if(t->val==ch && t->next!=root)
      {
	t->next->prev=t->prev;
	t->prev->next=t->next;
	root=t->next;
	return;
       /*	t->next->prev=t->next;
	t->next->next=t->next;
	root=t->next;
	printf("Value deleted");
	return;
      } */
      t->prev->next=t->next;
      t->next->prev=t->prev;
      printf("Value deleted");
    }
   /* #include<stdio.h>
#include<conio.h>
#include<alloc.h> */


   struct link1 * create1(int exp,int coeff,struct link1 *root7)
   {
      struct link1 *temp,*t;
      temp=(struct link1 *)malloc(sizeof(node));
      temp->exp=exp;
      temp->coeff=coeff;
      temp->next=NULL;
      t=root7;
      if(root7==NULL)
      {
	 root7=temp;
	 printf("Node made \n");
	 return (root7);
      }
      while(t->next!=NULL)
      {
	if(t==NULL)
	 break;
	t=t->next;
      }
      t->next=temp;
      printf("Value entered \n");
      return (root7);
   }
   void disp1(struct link1 *root7)
   {
     struct link1 *t;
     t=root7;
     if(root7==NULL)
     {
       printf("List is empty");
       return;
     }
     while(t!=NULL)
     {
       printf("%d ",t->coeff);
       printf("x^%d \n",t->exp);
       t=t->next;
     }
   }
   void add1()
   {
     struct link1 *t,*t1,*t2,*temp;
     temp=(struct link1 *)malloc(sizeof(node));
     temp->next=NULL;
       t=roota;
       t1=root1a;
       if(t==NULL || t1==NULL)
       {
	 printf("Enter both lists first");
	 return;
       }
       while(t!=NULL && t1!=NULL)
       {
	    if(t->exp==t1->exp)
	    {
	      root2a=create1(t1->exp,t->coeff+t1->coeff,root2a);
	      t=t->next;
	      t1=t1->next;
	    }

	    if(t->exp>t1->exp)
	    {
	      //	root3=cre(t->coff+t1->coff,t1->expo,root3);
		root2a=create1(t->exp,t->coeff,root2a);
	      t=t->next;


	    }

	    if(t1->exp>t->exp)
	    {
	     //	root3=cre(t->1coff+t1->coff,t1->expo,root3);
		root2a=create1(t1->exp,t1->coeff,root2a);
	      t1=t1->next;


	    }
	 }
       if(t!=NULL && t1==NULL)
       {
	// root3=cre(t->coff+t1->coff,t1->expo,root3);
	 root2a=create1(t->exp,t->coeff,root2a);
	      t=t->next;
       }
       if(t==NULL && t1!=NULL)
       {
	 root2a=create1(t1->exp,t1->coeff,root2a);
	  //    t=t->next;
	      t1=t1->next;
	// temp->next=t1;
       }
    }

    void concat()
    {
      struct link *t,*t1;
      t=root;t1=root1;


    }

   void a()
   {               int ch;
     while(1)
     {
	printf("\nSingle linked list\n");
	printf(" 1.Enter a new node\n 2.Display\n 3.Add after using position\n");
	printf(" 4.Add after using position\n 5.Add before using value\n 6.Add after using value\n");
	printf("7.Delete a node\n 8.Exit");
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
	       case 8:
		 return;
	     }

      }

   }

   void b()
   {
   int ch;
    while(1)
    {
       printf("This is doubley linked list\n");
       printf("1.Create a new node\n 2.Display\n 3.Insert after a node");
       printf("4.Insert before a node\n 5.Delete after \n 6.Delete before\n 7.Exit out of doubley linked list");
       scanf("%d",&ch);
	  switch(ch)
	   {
	     case 1:
	       createdouble();
	       break;
	     case 2:
	       dispdouble();
	       break;
	     case 3:
	       insadouble();
	       break;
	     case 4:
	       insbdouble();
	       break;
	     case 5:
	       deladouble();
	       break;
	     case 6:
	       delbdouble();
	       break;
	     case 7:
		return;
	     }

	 }
   }
    void c()
    {
      int ch3;
      clrscr();
      while(1)
	{// clrscr();
	   printf("This is single circular list");
	   printf("\n1.Create a new node\n 2.Display\n 3.Add a new node before value\n");
	   printf("4.Add a new node after a value\n 5.Delete value\n");
	   scanf("%d",&ch3);
	     switch(ch3)
	      {
		case 1:
		  createc();
		  break;
		case 2:
		  dispc();
		  break;
		case 3:
		  insbc();
		  break;
		case 4:
		  insac();
		  break;
		case 5:
		  delc();
		  break;
		case 6:
		   return;
	      }
	    }
    }

    void d()
    {
       int ch;
       while(1)
	{
	   printf("This is doubley circular linked list");
	   printf("\n1.Create a new node\n 2.Display\n 3.Add a new node before value");
	   printf("\n4.Add a new node after a value\n 5.Delete\n 6.Exit");
	   scanf("%d",&ch);
	      switch(ch)
	       {
		 case 1:
		  createdoublec();
		  break;
		 case 2:
		  dispdoublec();
		  break;
		 case 3:
		  insbdoublec();
		  break;
		 case 4:
		  insadoublec();
		  break;
		 case 5:
		   deldoublec();
		   break;
		 case 6:
		   return;
	       }

	     }
    }

    void occur()
    {
      int ch52;
       while(1)
       {
	  printf("1.Insert on n occurence after\n 2.Delete on n occurence");
	  printf("\n 3.Delete all same values\n 4.Insert on n occurence before\n");
	  printf("\n 5.Exit");
	  scanf("%d",&ch52);
	   switch(ch52)
	    {
	      case 1:
		insonnoccura();
		break;
	      case 2:
		delonnoccur();
		break;
	      case 3:
		delallsameoccur();
		break;
	      case 4:
		insonnoccurb();
		break;
	      case 5:
		return;
	      }
	   }


    }
    void stackstatic()
    {       int ch;
      while(1){
			printf("\n1.Push a value");
			printf("\n2.Pop a value");
			printf("\n3.Peep a value");
			printf("\n4.Exit\n");
			printf("Enter a value\n");
			scanf("%d",&ch);
			switch(ch)
			{
			  case 1:
			    printf("Enter the value\n");
			    scanf("%d",&val);
			    push(val);
			    getch();
			    break;
			  case 2:
			    v=pop();
			    if(v==0)
			    printf("No value in stack\n");
			    printf("The value is:- %d\n",v);
			    getch();
			    break;
			  case 3:
			    v=peep();
			    if(v==0)
			    {
				printf("No value in stack\n");
			    }
			    printf("%d",v);
			    break;
			  case 4:
			    return;
	}
      }
    }
    void stackdynamic()
    {
       int ch;
       while(1)
       {
	 printf("1.Push the values\n 2.Peep the values\n 3.Pop the values\n");
	 scanf("%d",&ch);
	   switch(ch)
	   {
	     case 1:
	      pushs();
	      break;
	     case 2:
	      peepalls();
	      break;
	     case 3:
	      pops();
	      break;
	     case 4 :
	      return;
	   }
       }
    }

    void polynomial()
    {
       int ch58,hc,hc1,i,val,val1;int v;
	clrscr();
       while(1)
       {
	  printf("\n1.Create a new node in first list");
	  printf("\n 2.Create the second list\n 3.Display first list\n");
	  printf("4.Display the second list\n 5.Add the two polynomials\n");
	  printf("5.Display the sum\n");
	  scanf("%d",&ch58);
	      switch(ch58)
	      {
		 case 1:
		  printf("Enter the highest power");
		  scanf("%d",&hc);
		     for(i=hc;i>=0;i--)
		     {
			printf("Enter the value");
			scanf("%d",&val);
			roota=create1(i,val,roota);
		     }
			break;

		  case 2:
		    printf("Enter the highest power");
		    scanf("%d",&hc1);
		      for(i=hc1;i>=0;i--)
		       {
			printf("Enter the value");
			scanf("%d",&val1);
			root1a=create1(i,val1,root1a);
		       }
			break;

		  case 3:
		   disp1(roota);
		   break;
		  case 4:
		    disp1(root1a);
		    break;
		  case 5:
		     add1();
		     break;
		  case 6:
		     disp1(root2a);
		     break;
		  case 7:
		     return;
		      }

		   }

    }



    void e()
    {
	int ch;
	while(1)
	 {
	   printf("This is the applications of single linked list");
	   printf("\n 1.Create a new node\n 2.Display the list\n 3.Selection sort\n 4.Occurence applications\n 5.Polynomial functions ");
	   printf("\n 6.Reverse\n 7.Exit\n 8.Stack in linked list");
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
		  selsort();
		  break;
		 case 4:
		  occur();
		  break;
		 case 5:
		  polynomial();
		  break;
		 case 6:
		  reverse();
		  break;
		 case 7:
		  stackstatic();
		  break;
		 case 8:
		  stackdynamic();
		  break;
		 case 28:
		  createsort();
		  break;
		 case
	    }
	}
    }



   void main()
      {
	int ch1,ch2,ch3,ch4,ch11,ch58,ch5,ch52;

	clrscr();
	while(1)
	{
	  printf("\n 1.Single linked list\n");
	  printf(" 2.Double linked list\n");
	  printf(" 3.Single circular linked list\n");
	  printf(" 4.Double circular  linked list\n");
	  printf(" 5.Single linked list appications\n");
	  printf(" 6.Return\n");
	  scanf("%d",&ch1);
	  switch(ch1)
	  {
	    case 1:
	      a();
	    case 2:
	      b();
	 /*    createdouble();
	     break;
	    case 12:
	     dispdouble();
	     break;
	    case 13:
	     insadouble();
	     break;
	    case 14:
	     insbdouble();
	     break;
	    case 15:
	     deladouble();
	     break;
	    case 17:
	     delbdouble();
	     break;
	    case 16:
	     return;*/
	     case 3:
	     c();
	     break;
	 /*   case 18:
	     createc();
	     break;
	    case 19:
	     dispc();
	     break;
	    case 20:
	     insbc();
	     break;
	    case 21:
	     insac();
	     break;
	    case 22:
	     delc();
	     break; */
	     case 4:
	      d();
	      break;
	     case 5:
	      e();
	      break;


	}

		  case 9:
		  exit();
		}

	    }
	    case 6:
	     exit();

	  }

	}

      }







