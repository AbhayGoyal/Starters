#include<stdio.h>
#include<conio.h>
#include<alloc.h>
 struct link
 {
  int exp;
  int coeff;
  struct link *next;
 }node;
 struct link *root;
 struct link *root1;
 struct link *root2;

   struct link * create(int exp,int coeff,struct link *root)
   {
      struct link *temp,*t;
      temp=(struct link *)malloc(sizeof(node));
      temp->exp=exp;
      temp->coeff=coeff;
      temp->next=NULL;
      t=root;
      if(root==NULL)
      {
	 root=temp;
	 printf("Node made \n");
	 return (root);
      }
      while(t->next!=NULL)
      {
	t=t->next;
      }
      t->next=temp;
      printf("Value entered \n");
      return (root);
   }
   void disp(struct link *root)
   {
     struct link *t;
     t=root;
     if(root==NULL)
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
   void add()
   {
     struct link *t,*t1,*t2,*temp;
     temp=(struct link *)malloc(sizeof(node));
     temp->next=NULL;
       t=root;
       t1=root1;
       if(t==NULL || t1==NULL)
       {
	 printf("Enter both lists first");
	 return;
       }
       while(t!=NULL && t1!=NULL)
       {
	    if(t->exp==t1->exp)
	    {
	     // root3=cre(t->coff+t1->coff,t1->expo,root3);
	      root2=create(t1->exp,t->coeff+t1->coeff,root2);
	      t=t->next;
	      t1=t1->next;


	    }

	    if(t->exp>t1->exp)
	    {
	      //	root3=cre(t->coff+t1->coff,t1->expo,root3);
		root2=create(t->exp,t->coeff,root2);
	      t=t->next;


	    }

	    if(t1->exp>t->exp)
	    {
	     //	root3=cre(t->coff+t1->coff,t1->expo,root3);
		root2=create(t1->exp,t1->coeff,root2);
	      t1=t1->next;


	    }
	 }
       if(t!=NULL && t1==NULL)
       {
	// root3=cre(t->coff+t1->coff,t1->expo,root3);
	 root2=create(t->exp,t->coeff,root2);
	      t=t->next;
       }
       if(t==NULL && t1!=NULL)
       {
	 root2=create(t1->exp,t1->coeff,root2);
	  //    t=t->next;
	      t1=t1->next;
	// temp->next=t1;
       }
    }


   void main()

   {
     int ch,hc,hc1,i,val;
     clrscr();

     while(1)
     {
	printf("1.Create\n 2.Display\n");
	scanf("%d",&ch);
	switch(ch)
	{
	 case 1:
		 printf("Enter the highest power");
		 scanf("%d",&hc);
		for(i=hc;i>=0;i--)
		 {
			printf("Enter the value");
			scanf("%d",&val);
			root=create(i,val,root);
		 }
		 break;

	 case 2:
		printf("Enter the highest power");
		scanf("%d",&hc1);
		for(i=hc1;i>=0;i--)
		{
			printf("Enter the value");
			scanf("%d",&val);
			root1=create(i,val,root1);
		}
		break;

	 case 3:

		disp(root);
		break;
	 case 4:
		disp(root1);
		break;
	 case 5:
		add();
		break;
	 case 6:
		disp(root2);
		break;
	 case 7:
	 return;


	}
     }
   }
