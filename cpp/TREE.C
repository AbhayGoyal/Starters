#include<stdio.h>
#include<conio.h>
#include<alloc.h>
   struct tree
   {
       int val;
       struct tree *left;
       struct tree *right;
   }node;
   struct tree *root;
   struct stack
   {
     int top;
     struct tree *arr[30];
   }s;
   //int stack[10];
   //struct tree *stack1[10],*stackpre[10];
   int flag=-1;

   //int flag=0;
   void create()
   {
      struct tree *temp,*t,*max;
      temp=(struct tree *)malloc(sizeof(node));
      printf("Enter the value\n");
      scanf("%d",&temp->val);
      temp->right=temp->left=NULL;
      if(root==NULL)
      {
	 root=temp;
	 printf("Node made\n");
	 return;
      }
      t=root;

      while(t!=NULL)
       {
	   max=t;
	   if(temp->val<t->val)
	   {
	     t=t->left;
	   }
	   else
	   {
	       t=t->right;
	   }

       }
       if(temp->val<max->val)
	 max->left=temp;
       else
	 max->right=temp;
	 printf("Value added");

       }

     /*  while(1)
      {
	 if(temp->val>t->val)
	 {
	    t=t->right;
	    if(t->right==NULL)
	    {
	       t->right=temp;
	       break;
	    }
	    else
	       t=t->right;
	  }
	  break;
       }*/
      /*
       void pre(struct tree *t)
       {
	// struct tree *t;
	 //t=root;
	 printf("%d\n",t->val);
	 pre(t->left);
	 pre(t->right);
       }*/
   void push(struct tree *t)
   {
      if(s.top==29)
	printf("Sorry stack is full");
      else
       s.arr[++s.top]=t;
   }

   struct tree * pop()
   {
      struct tree *t;
      if(s.top==-1)
      {
	 printf("Sorry underflow");
	 return NULL;
      }
      t=s.arr[s.top];
      s.top--;
      return(t);
   }

   void disppre()
   {
    struct tree *t;
     if(root==NULL)
     {
	printf("Sorry no tree\n");
	return;
     }
     t=root;
     push(NULL);
     while(t!=NULL)
     {
       while(t->left!=NULL && t->right!=NULL)
       {
	  push(t->right);
	  push(t->left);
	  printf("%d\n",t->val);
	  t=pop();
       }

       while(t->left==NULL && t->right==NULL)
       {
	  printf("%d\n",t->val);
	  t=pop();
	  if(t==NULL)
	    return;
       }

       while(t->left==NULL && t->right!=NULL)
       {
	  push(t->right);
	  printf("%d\n",t->val);
	  t=pop();
	  if(t==NULL)
	    return;
       }

       while(t->left!=NULL && t->right==NULL)
       {
	  push(t->left);
	  printf("%d\n",t->val);
	  t=pop();
	  if(t==NULL)
	    return;
       }


       }
   }


   void dispin()
   {
       struct tree *t;
       if(root==NULL)
       {
	 printf("Make a tree first\n");
	 return;
       }
       t=root;
       s.top=-1;
       push(NULL);
       if(t==NULL)
	 return;

       while(t!=NULL)
       {
	  while(t!=NULL)
	  {
	    push(t);
	    t=t->left;
	  }
	  t=pop();
	  if(t==NULL)
	    return;
	  printf("%d\n",t->val);

	  while(t->right==NULL)
	  {
	    t=pop();
	     if(t==NULL)
	       return;
	     printf("%d\n",t->val);

	  }
	  t=t->right;
	  }

       }


   void disppost()
   {
      struct tree *t,*q;
      if(root==NULL)
      {
	printf("Enter the tree first\n");
	return;
      }
       t=root;
       s.top=-1;
       //push(NULL);
       if(t==NULL)
	 return;
       q=root;
       while(1)
       {
	  while(t->left!=NULL)
	  {
	    push(t);
	    t=t->left;
	  }
       while(t->right==NULL || t->right==q)
       {
	  printf("%d\n",t->val);
	  q=t;
	  t=pop();
	  if(t==NULL)
	     return;
       }
       push(t);
       t=t->right;
      }
   }
   int count(struct tree *t)
   {

      if(root==NULL)
      {
	printf("Enter the tree first\n");
	return 0;
      }
    return (count(t->left)+count(t->right)+1);
   }

   /*int smallestnode()
   {
     struct tree *t;int a;
     t=root;
     if(root==NULL)
     {
       printf("Tree empty");
       return;
     }
     while(t->left->left!=NULL)
     {
      t=t->left;
     }
     //printf("%d",t->val);
     a=t->left->val;
     return a;
   } */

   /*int largestnode()
   {
     struct tree *t;int a;
     t=root;
     if(root==NULL)
     {
       printf("Tree empty");
       return;
     }
     while(t->right->right!=NULL)
     {
      t=t->right;
     }
     return t->right->val;
   } */

   void del()
   {
     struct tree *t,*p,*child,*l,*in;int v;
     t=root;
     p=NULL;
     printf("Enter the value to be deleted");
     scanf("%d",&v);
      if(root==NULL)
      {
	printf("Enter the tree first");
	return ;
      }
      /*if(root->val==v)
      {
	printf("Value found");
	return;
      } */
       t=root;
      while(t!=NULL)
      {
	 if(t->val==v)
	   break;
	 else
	 {
	    p=t;
	    if(t->val>v)
	      t=t->left;
	    else
	      t=t->right;
	 }
      }
      if(t->val==v)
      {
	printf("Value found\n");
	flag=1;
      }
      else
      {
	 printf("Value not found\n");
	 return;
      }

      if(flag==1)
      {
	 if(t->left==NULL && t->right==NULL)
	 {
	    if(p==NULL)
	       root=NULL;
	    if(t==p->left)
	       p->left=NULL;
	    if(t==p->right)
	       p->right=NULL;
	 }

	 if(t->right==NULL && t->left!=NULL)
	 {
	    child=t->left;
	    if(p->left==t)
	      p->left=child;
	    else
	      p->right=child;

	 }

	 if(t->right!=NULL && t->left==NULL)
	 {
	     child=t->right;
	    if(p->left==t)
	      p->left=child;
	    else
	      p->right=child;

	 }

	 if(t->left!=NULL && t->right!=NULL)
	 {
	    l=t->right;
	    in=t->right;
	    while(in->left!=NULL)
	    {
	       l=in;
	       in=in->left;
	    }
	    t->val=in->val;
	    if(l==in)
	       t->right=NULL;
	    if(in->left==NULL && in->right==NULL)
	    {
	      if(l->left==in)
		l->left=NULL;
	      else
		l->right=NULL;
	    }
	    if(in->left!=NULL && in->right==NULL)
	    {
		child=in->left;
		if(l->left==in)
		   l->left=child;
		else
		   l->right=child;
	    }
	    if(in->left==NULL && in->right!=NULL)
	    {
		child=in->right;
		if(l->left==in)
		   l->left=child;
		else
		   l->right=child;
	    }
	 }
       printf("Value removed\n");
   }
 }


   void main()
      {
	int ch,a,b;
	    clrscr();
	while(1)
	{
	   printf("1.Create tree\n2.Display tree in pre order\n3.Display tree in post order\n");
	   printf("4.Display the tree in postorder\n5.Delete a node\n6.Exit");
	   printf("\nEnter choice");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	      case 1:
		create();
		break;
	      case 2:
		disppre();
		break;
	      case 3:
		dispin();
		break;
	      case 4:
		disppost();
		break;
	      case 5:
		 del();
		break;
	      case 6:
		return;
	   }

	}
      }

