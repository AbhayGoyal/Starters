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
   int flag=0;
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



   void disppre(struct tree *t)
   {

      if(t!=NULL)
      {
	printf("%d\n",t->val);
	disppre(t->left);
	disppre(t->right);
      }
     /* t=root->right;
      while(t!=NULL)
      {
	printf("%d\n",t->val);
	t=t->right;
      }*/

   }
   void dispin(struct tree *t)
   {
      if(root==NULL)
      {
	printf("Enter the tree first\n");
	return;
      }
      if(t!=NULL)
      {
	dispin(t->left);
	printf("%d\n",t->val);
	dispin(t->right);
      }

   }

   void disppost(struct tree *t)
   {
      if(root==NULL)
      {
	printf("Enter the tree first\n");
	return;
      }
      if(t!=NULL)
      {
	disppost(t->left);
	disppost(t->right);
	printf("%d\n",t->val);
      }

   }
   int count(struct tree *t)
   {

      if(root==NULL)
      {
	printf("Enter the tree first\n");
	return 0;
      }
     /* if(t!=NULL)
      {
	count(t->left);
	//flag++;
	count(t->right,flag++);
       //printf("%d",t->val);
      }*/

    return (count(t->left)+count(t->right)+1);
   }

   void smallestnode()
   {
     struct tree *t;
     if(root==NULL)
     {
       printf("Tree empty");
       return;
     }
     while(t->left!=NULL)
     {
      t=t->left;
     }
     printf("%d",t->val);
   }
   void largestnode()
   {
     struct tree *t;
     if(root==NULL)
     {
       printf("Tree empty");
       return;
     }
     while(t->right!=NULL)
     {
      t=t->right;
     }
     printf("%d",t->val);
   }
   struct tree *del(struct tree *t)
   {
     struct tree *max;int ch;
     t=root;
      if(root==NULL)
      {
	printf("Enter the tree first");
	return NULL;
      }
      printf("Enter the value to be deleted");
      scanf("%d",&ch);
      if(root->val==ch)
      {
	printf("Value found");
	return root;
      }
	 if(ch<t->val)
	   del(t->left);
	 if(ch>t->val)
	   del(t->right);

     /* if(t==NULL)
      {
	 printf("Value not found");
	 return;
      }*/
      if(t->left==NULL && t->right==NULL)
      {
	 max=t;
	 free(max);
      }
      if(t->left==NULL)
      {
	max=t;
	t=t->right;
	free(max);
      }
       if(t->right==NULL)
      {
	max=t;
	t=t->left;
	printf("Done");
	free(max);
      }
      if(t->right!=NULL && t->left!=NULL)
      {
	 max=findMin(t->right);
	 t->val=max->val;
	 t->right=del(t->right);
      }
      return t;
   }

   struct tree * findMin(struct tree *t)
   {
      while(t->right!=NULL && t->left!=NULL)
	t=t->right;

	return t;
   }


   void main()
      {
	int ch;//struct tree *node1;
	    clrscr();
	   // node1=root;
	while(1)
	{
	   printf("1.Create tree\n2.Display tree in pre order\n3.Display tree in post order\n");
	   printf("4.Display the tree in postorder\n5.Exit");
	   printf("\nEnter choice");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	      case 1:
		create();
		break;
	      case 2:
		disppre(root);
		break;
	      case 3:
		dispin(root);
		break;
	      case 4:
		disppost(root);
		break;
	      case 5:
		//a=count(root);
		//printf("this is it %d",a);
		//printf("%d",a);
		break;
	      case 6:
		dele();
		break;
	      case 7:
		return;


	   }

	}
      }