#include<stdio.h>
#include<conio.h>
#include<alloc.h>
  struct que
  {
    int arr[5];
    int f,r,ctr;
  }q;
   int ctr=0;

  struct link
  {
    int val;
    struct link *next;
  }node;
    struct link *root;
    struct link *root1;


  void create()
  {
    int v;
    if(q.r==5)
    {
      printf("Queue full");
      return;
    }
    printf("Enter the value");
    scanf("%d",&v);
    q.arr[q.r]=v;
    q.r++;
    printf("Value entered");
  }
  void front()
  {
    int v;
    if(q.f==q.r)
    {
      printf("Empty queue");
      return ;
    }
    v=q.arr[q.f];
    q.f++;
    printf("Value removed is %d \n",v);
  }
  void shiftqueue()
  {
     int v,i;
    if(q.f==q.r)
    {
      printf("Empty queue");
      return ;
    }
    v=q.arr[q.f];
    for(i=1;i<q.r;i++)
    {
     q.arr[i-1]=q.arr[i];
    }
    q.r--;
    printf("Removed value is %d",v);
    printf("Value has been shifted and removed");
  }

  void disp()
  {
    int ch=q.f;
    if(q.f==q.r)

     printf("List is empty");
    while(ch!=q.r)
    {
      printf("%d \n",q.arr[ch]);
      ch++;
    }
  }

  void createl()
  {
    struct link *t,*temp;
    temp=(struct link *)malloc(sizeof(node));
    printf("Enter the value");
    scanf("%d",&temp->val);
    temp->next=NULL;
    if(root==NULL)
    {
       root=temp;
       printf("Node made");
       return;
    }
    temp->next=root;
    root=temp;
    printf("Value entered \n");
  }

  void dell()
  {
    struct link *t;
    t=root;
    if(root==NULL)
    {
      printf("Queue is empty");
      return;
    }
    while(t->next->next!=NULL)
    {
      t=t->next;
    }
    t->next=NULL;
    printf("Value deleted\n");
  }
  void displ()
  {
   struct link *t;
   t=root;
   if(root==NULL)
   {
     printf("Create queue");
     return;
   }
   while(t!=NULL)
   {
     printf("%d \n",t->val);
     t=t->next;
   }
   }
   void createcircular()
   {
     int v;

     if(ctr!=5)
     {
	printf("Enter the value\n");
	scanf("%d",&v);
	q.arr[q.r]=v;
	q.r=(q.r+1)%5;
	ctr++;
	return;
     }
     if(ctr==5)
     {
      printf("Queue is full");
      return;
     }
   }
   void dispcircular()
  {                int i;
    /*int ch=q.f;
    if(q.f==q.r)
     printf("Queue is empty");*/
    for(i=0;i<ctr;i++)
    {
      printf("%d \n",q.arr[i]);

    }
  }
  void delcircular()
  {   int v;
    if(ctr<0)
    {
      printf("Queue is empty");
      return;
    }
    q.f++;
    v=q.arr[q.f];
    ctr--;
    printf("Removed value is %d\n",v);

  }
  void dqrearout()
  {              int i,v;
    if(q.r==q.f)
    {
      printf("Queue is empty");
    }
    q.r--;
    v=q.arr[q.r];
    printf("Value removed is %d\n",v);
  }
  void dqfrontinput()
  {              int i;
    if(q.r==q.f)
    {
      printf("Queue is full");
    }
    for(i=q.r;i>=q.f;i--)
    {
      q.arr[i+1]=q.arr[i];
    }
    printf("Enter the value");
    scanf("%d",&q.arr[q.f]);
      q.r++;

  }


  void stat()
  {
      int ch;
      q.ctr=0;
    while(1)
    {
      printf("\n 1.Static rear \n 2.Static front \n 3.Display static");
      printf("\n 4.Shift queue\n 5.Create circular queue\n 6.Display circular queue ");
      printf("\n 7.Delete circular queue\n 8.Dqueue rear out");
      printf("\n 9.Dqueue front in\n 10.Exit");
      printf("\n Enter choice");
      scanf("%d",&ch);
      switch(ch)
      {
	 case 1:
	  create();
	  break;
	 case 2:
	  front();
	  break;
	 case 3:
	  disp();
	  break;
	 case 4:
	  shiftqueue();
	  break;
	 case 5:
	  createcircular();
	  break;
	 case 6:
	  dispcircular();
	  break;
	 case 7:
	  delcircular();
	  break;
	 case 8:
	  dqrearout();
	  break;
	 case 9:
	  dqfrontinput();
	  break;
	 case 10:
	  return;

       }
      }
    }
    void createcircularl()
    {
      struct link *t,*temp;
      t=root1;int v;

	temp=(struct link *)malloc(sizeof(node));
	printf("Enter the value");
	scanf("%d",&temp->val);
	temp->next=NULL;
	if(root1==NULL)
	{
	   root1=temp;
	   root1->next=root1;
	   printf("Node made");
	   return;
	}

	do
	{
	 t=t->next;
	}while(t->next!=root1);

	temp->next=root1;
	root1=temp;
	t->next=root1;
	printf("Value entered");
	//ctr++;

	}


      void dispcircularl()
      {
	struct link *t;
	t=root1;
	if(root1==NULL)
	{
	  printf("Create queue");
	  return;
	}
	do
	{
	   printf("%d \n",t->val);
	   t=t->next;
	 }while(t!=root1);

      }

      void delcircularl()
      {
	struct link *t;
	t=root1;
	do
	{
	  t=t->next;
	}while(t->next->next!=root1);
	t->next=root1;
	printf("Done\n");

      }

      void dqrearoutl()
  {
    struct link *t;
   // t=root;
    if(root==NULL)
    {
      printf("Queue is empty");
    }
    printf("Value removed is %d\n",root->val);
    root=root->next;

  }
  void dqfrontinputl()
  {
   struct link *t,*temp;
    t=root;
    temp=(struct link *)malloc(sizeof(node));
    printf("Enter the value");
    scanf("%d",&temp->val);
    if(root==NULL)
    {
      printf("Queue is empty");
    }
    while(t!=NULL)
    {
      t=t->next;

    }
    t->next=temp;
    printf("Front added");
  }



  void dynamic()
  {
    int ch;

    while(1)
    {
      printf("This is dymanic applications:");
      printf("\n 1.Create queue\n 2.Delete queue\n 3.Display queue");
      printf("\n 4.Create circular list\n 5.Display circular list");
      printf("\n 6.Delete circular list\n 7.Dqueue rear out\n 8.Dqueue front input\n ");
      scanf("%d",&ch);
      switch(ch)
      {
	 case 1:
	  createl();
	  break;
	 case 2:
	  dell();
	  break;
	 case 3:
	  displ();
	  break;
	 case 4:
	  createcircularl();
	  break;
	 case 5:
	  dispcircularl();
	  break;
	 case 6:
	  delcircularl();
	  break;
	 case 7:
	  dqrearoutl();
	  break;
	 case 8:
	  dqfrontinputl();
	  break;
	 case 9:
	  return;



       }

     }

  }

  void main()
  {
    q.f=q.r=0;
    int ch;
    clrscr();
    while(1)
    {
      printf("\n 1.Static implementations");
      printf("\n 2.Dynamic implementations");
      printf("\n 3.Exit");
      printf("\n Enter choice");
      scanf("%d",&ch);
      switch(ch)
      {
	 case 1:
	  stat();
	  /*
	  create();
	  break;
	 case 2:
	  front();
	  break;
	 case 3:
	  disp();

	  break;*/
	  break;
	 case 2:
	  dynamic();
	  break;
	  /*
	  createl();
	  break;
	 case 5:
	  dell();
	  break;
	 case 6:
	  displ();
	  break; */
	 case 3:
	  return;
      }


    }



  }


