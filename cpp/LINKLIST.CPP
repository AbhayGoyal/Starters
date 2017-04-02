#include<stdio.h>
#include<conio.h>
 struct link
   {
     int val;
     struct link *next;
   }node;
   struct link *root=NULL;

  void twopointcreate()
  {




  }
 void main()
      {
	int ch;
	clrscr();
	while(1)
	{
	printf(" 1.Enter a new node\n 2.Display\n 3.Add before\n");
	printf("\n 4.Add after\n 5.Delete\n 6.Reverse\n");
	printf("\n 7.Display\n Enter your choice\n");

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
	    case 12:
	     addbv();
	     break;
	    case 10:
	     addav();
	     break;
	    case 5:
	     del();
	     break;
	    case 6:
	     reverse();
	     break;

	    case 15:
	    return;
	  }
	}

      }