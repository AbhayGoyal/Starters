#include<stdio.h>
#include<conio.h>

   struct tree
   {
      int val;
      struct tree *left;
      struct tree *right;
   }node;
   struct tree *root=NULL;

   void insert()
   {
      struct tree *nodeptr,*parentptr,*temp;
      temp=(struct tree *)malloc(sizeof(node));
      printf("Enter the value");
      scanf("%d",&temp->val);
      temp->right=NULL;
      temp->left=NULL;
      if(root==NULL)
      {
	 root=temp;
	 printf("Vaue entered");
	 return;
      }
      nodeptr=root;
      parentptr=NULL;
      while(nodeptr!=NULL)
      {
	 parentptr=nodeptr;
	 if(temp->val<nodeptr->val)
	      nodeptr=nodeptr->left;
	 else
	     nodeptr=nodeptr->right;
      }
      if(parentptr->val<temp->val)
	 parentptr->left=temp;
      else
	 parentptr->right=temp;

	 printf("Value entered");
   }

   void preorder(struct tree *t)
   {
      if(t!=NULL)
      {
	 printf("%d\n",t->val);
	 preorder(t->left);
	 preorder(t->right);
      }
   }

   void main()
   {
      int ch;
      while(1)
      {
	 printf("1.Insert Element\n2.Preorder\n3.Exit");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	   case 1:
	     insert();
	     break;
	   case 2:
	      preorder(root);
	      break;
	   case 3:
	      return;
	 }
      }
   }