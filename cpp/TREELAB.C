#include<stdio.h>
#include<conio.h>
#include<alloc.h>

 struct node
 {
   int data;
   struct node *left;
   struct node *right;
 };

 struct node *tree=NULL;
 struct node *store;
// void createTree(struct node *);
 struct node *insertElement(struct node *,int);
 void preorderTraversal(struct node *);
 void inorderTraversal(struct node *);
 void postorderTraversal(struct node *);
 struct node *searchTree(struct node *,int);

 int main()
 {
   int ch,val;
   struct node *ptr;
  // createTree(tree);
   while(1)
   {
      printf("\n1.Insert Element\n2.Preoder travsersal\n3.Inorder traversal\n");
      printf("4.Postorder traversal\n5.Search element\n6.Exit");
      scanf("%d",&ch);
      switch(ch)
      {
	case 1:
	   printf("Enter the value to be entered");
	   scanf("%d",&val);
	   tree=insertElement(tree,val);
	   printf("\n");
	   break;
	case 2:
	    printf("Elements in preorder are:\n");
	    preorderTraversal(tree);
	    printf("\n");
	    break;
	case 3:
	    printf("Elements in inorder are:\n");
	    inorderTraversal(tree);
	    printf("\n");
	    break;
	case 4:
	    printf("Elements in postorder are:\n");
	    postorderTraversal(tree);
	    printf("\n");
	    break;
	case 5:
	    printf("Enter the value to be searched");
	    scanf("%d",&val);
	    store=searchTree(tree,val);
	    if(store==NULL)
	       printf("Value not found");
	    else
	       printf("Value found");
	    break;
	case 6:
	  return;
      }
   }
 }

 //void createTree(struct node *tree)
 //{
//     tree=NULL;
 //}
 struct node *insertElement(struct node *tree,int val)
 {
    struct node *ptr,*nodeptr,*parentptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
    if(tree==NULL)
    {
       tree=ptr;
       tree->left=NULL;
       tree->right=NULL;
    }
    else
    {
       parentptr=NULL;
       nodeptr=tree;
       while(nodeptr!=NULL)
       {
	  parentptr=nodeptr;
	  if(val<nodeptr->data)
	     nodeptr=nodeptr->left;
	  else
	     nodeptr=nodeptr->right;
       }
       if(val<parentptr->data)
	   parentptr->left=ptr;
       else
	   parentptr->right=ptr;
     }
     return tree;

    }

  void preorderTraversal(struct node *tree)
  {
     if(tree!=NULL)
     {
	printf("%d\n",tree->data);
	preorderTraversal(tree->left);
	preorderTraversal(tree->right);
     }
  }

  void inorderTraversal(struct node *tree)
  {
     if(tree!=NULL)
     {
	inorderTraversal(tree->left);
	printf("%d\n",tree->data);
	inorderTraversal(tree->right);
     }
  }


  void postorderTraversal(struct node *tree)
  {
     if(tree!=NULL)
     {
	postorderTraversal(tree->left);
	postorderTraversal(tree->right);
	printf("%d\n",tree->data);
     }
  }
  struct node *searchTree(struct node *tree,int key)
  {
     if(tree==NULL || tree->data==key)
	return tree;
     if(tree->data<key)
	return searchTree(tree->right,key);
     return searchTree(tree->left,key);
  }