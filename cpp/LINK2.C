#include<stdio.h>
#include<conio.h>
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
	  }

   }
   void main()
   {

   }