#include<stdio.h>
#include<conio.h>
 struct link
 {
  int exp;
  int coeff;
  struct link *next;
 }node;
 struct link *root;
 struct link *root1;

   struct link * create(int coeff,int exp,struct link *root)
   {
      struct link *temp,*t;
      temp->exp=exp;
      temp->coeff=coeff;
      if(root==NULL)
      {
	 root=temp;
	 printf("Node maade");
	 return (root);
      }
      while(t->next!=NULL)
      {
	t=t->next;
      }
      t->next=temp;
      printf("Value entered");
      return (root);
   }
   void disp(struct link *root)
   {
     struct link *t;
     t=root;
     while(t->next!=NULL)
     {
       printf("%d",t->exp);
       printf("%d \n",t->coeff);
       t=t->next;
     }
   }
   void main()

   {
     int ch,hc,hc1,i,val;
     clrscr();
     printf("1.Create\n 2.Display\n");
     scanf("%d",&ch);
     while(1)
     {
	switch(ch)
	{
	 case 1:
	 printf("Enter the highest coefficient");
	 scanf("%d",&hc);
	 for(i=hc+1;i>=0;i--)
	 {
	    printf("Enter the value");
	    scanf("%d",&val);
	    root=create(i,val,root);
	 }
	 break;
	 case 2:
	 printf("Enter the highest coefficient");
	 scanf("%d",&hc1);
	 for(i=hc+1;i>=0;i--)
	 {
	    printf("Enter the value");
	    scanf("%d",&val);
	    root=create(i,val,root1);
	 }
	 break;
	 case 3:
	  disp(root);
	  break;
	 case 4:
	  disp(root1);
	  break;
	 case 5:
	  return;
	}
     }





   }
