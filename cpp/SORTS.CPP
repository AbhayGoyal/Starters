#include<stdio.h>
#include<alloc.h>
#include<conio.h>
  int n,n1;
   void selsort(int *p,int n)
   {
   int i,j,temp;

      for(i=0;i<n-1;i++)
      {
	for(j=i+1;j<n;j++)
	{
	   if(*(p+j)<*(p+i))
	   {
	     temp=*(p+i);
	     *(p+i)=*(p+j);
	     *(p+j)=temp;
	   }
	 }
      }
      for(i=0;i<n;i++)
      {
	printf("%d\t",*(p+i));
      }
     }



   void imp_selsort(int *p)
   {
     int i,j,k,temp;
     for(i=0;i<n-1;i++)
      {   k=i;
	for(j=i+1;j<n;j++)
	{
	   if(*(p+k)>*(p+j))
	   {
	      k=j;
	   }
	   if(i!=k)
	   {
	      temp=*(p+k);
	      *(p+k)=*(p+i);
	      *(p+i)=temp;
	   }
	 }
      }
      for(i=0;i<n;i++)
      {
	printf("%d\t",*(p+i));
      }

   }

   void bubble(int *p)
   {               int i,j,temp;
      for(i=0;i<n-1;i++)
      {
	for(j=0;j<n-i-1;j++)
	{
	   if(*(p+j+1)<*(p+j))
	   {
	     temp=*(p+j);
	     *(p+j)=*(p+j+1);
	     *(p+j+1)=temp;

	   }
	}
      }
      for(i=0;i<n;i++)
      {
	printf("%d\t",*(p+i));
      }

   }

   void imp_bubble(int *p)
   {                        int i,j,temp,flag;
      for(i=0;i<n-1;i++)
      {
	 flag=0;
	for(j=0;j<n-1-i;j++)
	{
	   if(*(p+j+1)<*(p+j))
	   {
	      flag=1;
	     temp=*(p+j);
	     *(p+j)=*(p+j+1);
	     *(p+j+1)=temp;

	   }
	}
	if(flag==0)
	   break;

      }
      for(i=0;i<n;i++)
      {
	printf("%d\t",*(p+i));
      }

   }

   void insert(int *p)
   {
      int i,j,temp;
      for(i=1;i<n;i++)
      {
	for(j=i;j>0;j--)
	{
	  if(*(p+j)<*(p+j-1))
	  {
	     temp=*(p+j-1);
	     *(p+j-1)=*(p+j);
	     *(p+j)=temp;
	  }

	}

      }
      for(i=0;i<n;i++)
      {
	printf("%d\t",*(p+i));
      }

   }


   void imp_insert(int *p)
   {
      int i,j,temp,flag;
      for(i=1;i<n;i++)
      {
	  flag=0;
	for(j=i;j>0;j--)
	{
	  if(*(p+j)<*(p+j-1))
	  {
	     flag=1;
	     temp=*(p+j-1);
	     *(p+j-1)=*(p+j);
	     *(p+j)=temp;
	  }

	}

	if(flag==0)
	  break;
      }
      for(i=0;i<n;i++)
      {
	printf("%d\t",*(p+i));
      }

   }

   void shaker(int *p)
   {
     int i,j,k,temp,temp1;
     for(i=0,j=n-1;i<j;i++)
     {
	for(k=i;k<j;k++)
	{
	   if(*(p+k)>*(p+k+1))
	   {
	      temp=*(p+k);
	      *(p+k)=*(p+k+1);
	      *(p+k+1)=temp;
	   }
	}

	for(k=j;k>i;k--)
	{
	   if(*(p+k)<*(p+(k-1)))
	   {
	     temp1=*(p+(k-1));
	     *(p+(k-1))=*(p+k);
	     *(p+k)=temp1;

	   }
	}

     }
     for(i=0;i<n;i++)
      {
	printf("%d\t",*(p+i));
      }

   }

  /* void imp_shaker(int *p)
   {
     int i,j,k,temp,temp1,flag;
     for(i=0,j=n-1;i<j;i++)
     {
	for(k=i;k<j;k++)
	{
	   if(*(p+k)>*(p+k+1))
	   {
	      temp=*(p+k);
	      *(p+k)=*(p+k+1);
	      *(p+k+1)=temp;
	   }

	}

	for(k=j;k>i;k--)
	{
	    flag=0;
	   if(*(p+k)<*(p+(k-1)))
	   {
	     flag=1;
	     temp1=*(p+(k-1));
	     *(p+(k-1))=*(p+k);
	     *(p+k)=temp1;

	   }
	   if(flag==0)
	     break;

	}

     }
	for(i=0;i<n;i++)
      {
	printf("%d\t",*(p+i));
      }

   }*/

   void merge(int *p,int *p1)
   {
    int *p2;
      int i=0,j=0,k;
      k=0;
      p2=(int *)malloc((n+n1)*2);

      while(i<n && j<n1)
      {
	 if(*(p+i)>*(p1+j))
	 {
	    *(p2+k)=*(p1+j);
	    k++;
	    j++;
	 }
	 else
	 {
	    *(p2+k)=*(p+i);
	       i++;
	       k++;
	 }
      }

	 while(i<n)
	 {
	   *(p2+k)=*(p+i);
	   i++;
	   k++;
	 }
	 while(j<n1)
	 {
	   *(p2+k)=*(p1+j);
	     j++;
	     k++;

	 }

      printf("\nFirst array is:-\n");
      for(i=0;i<n;i++)
      {
	 printf("%d\t",*(p+i));
      }
      printf("\n");
      printf("Second array:-\n");
       for(i=0;i<n1;i++)
      {
	 printf("%d\t",*(p1+i));
      }
      printf("\n");
      printf("Merged array\n");
       for(i=0;i<n+n1;i++)
      {
	 printf("%d\t",*(p2+i));
      }
      printf("\n");
   }
    void radix(int *p)
    {
       int i,j,k;
       int sum,q[100][10],m,rear[10]={0};

       for(sum=10;sum<=1000;sum*=10)
       {
	  for(i=0;i<n;i++)
	  {
	     m=(*(p+i)%sum*10/sum);
	     q[m][rear[m]++]=*(p+i);
	  }

	  k=0;
	  for(i=0;i<10;i++)
	  {
	     for(j=0;j<rear[i];j++)
	     {
	       *(p+k)=q[i][j];
		 k++;
	     }

	    rear[i]=0;
	  }

       }
       printf("Array now is;\n");
       for(i=0;i<n;i++)
       {
	 printf("%d\t",*(p+i));
       }

    }

    void binary(int *p)
    {
       int low=0,high=9,mid,ch,key,i;
       printf("Enter the value to be searched");
       scanf("%d",&key);
       while(low<high)
       {
	   mid=(low+high)/2;
	   if(*(p+mid)==key)
	   {
	     printf("Value found");
	     return;
	   }
	   if(key,*(p+mid))
	     high=mid-1;
	   if(key>*(p+mid))
	     low=mid+1;
       }
       printf("Value ot found");
    }
    void sequence(int *p)
    {
       int i,ch;
       printf("Enter the value to be searched");
       scanf("%d",&ch);
       for(i=0;i<n;i++)
       {
	 if(*(p+i)==ch)
	 {
	    printf("Value found");
	    return;
	 }

       }
    }
  /*  void disp(int *temp)
    {
      int i;
      for(i=0;i<n;i++)
      {
	printf("%d",temp+i);
      }
    }

    void dispmerge(int *p,int *p1,int *p2)
    {
      int i;
      for(i=0;i<n;i++)
      {
	printf("%d",p+i);
      }

      for(i=0;i<n1;i++)
      {
	printf("%d",p1+i);
      }

      for(i=0;i<(n+n1);i++)
      {
	printf("%d",p2+i);
      }

    }*/

    void quick(int *p)
    {
       int pivot=n-1;
       int low=0;
       int high=n-2;
       while(low<=high)
       {
	  if(*(p+low)>*(p+high))
	  {


	  }




       }


    }

   void main()
   {
       int ch,*temp,*temp1,i,*temp2;
       clrscr();
       while(1)
       {
	  printf("\n 1.Selection Sort\n 2.Improvised Selection Sort\n");
	  printf(" 3.Bubble Sort\n 4.Improvised Bubble Sort\n");
	  printf(" 5.Insertion Sort\n 6.Improvised Insertion Sort");
	  printf("\n 7.Merge Sort\n 8.Binary Search\n 9.Sequential search");
	  printf("\n 10.Radix sort\n 11.Shaker sort\n 12.Exit");
	  printf(" Enter your choice\n");
	  scanf("%d",&ch);
	  if(ch==12)
	    return;
	  printf("Enter the size of array\n");
	  scanf("%d",&n);
	  temp=(int *)malloc(n*2);
	  printf("Enter the values");
	  for(i=0;i<n;i++)
	  {
	    scanf("%d",temp+i);
	  }

	  switch(ch)
	  {
	     case 1:
	       selsort(temp,n);
	       break;
	     case 2:
	       imp_selsort(temp);
	       break;
	     case 3:
	       bubble(temp);
	       break;
	     case 4:
	       imp_bubble(temp);
	       break;
	     case 5:
	       insert(temp);
	       break;
	     case 6:
	       imp_insert(temp);
	       break;
	     case 7:
	       selsort(temp,n);
		 printf("\nEnter the size of second array\n");
	       scanf("%d",&n1);
	       temp1=(int *)malloc(n1*2);
	       printf("Enter the values\n");
	       for(i=0;i<n1;i++)
	       {
		 scanf("%d",(temp1+i));
	       }
	       selsort(temp1,n1);
	      // imp_selsort(temp1);
	       merge(temp,temp1);
	       break;
	     case 8:
	       binary(temp);
	       break;
	     case 9:
	       sequence(temp);
	       break;
	     case 10:
	       radix(temp);
	       break;
	     case 11:
	       shaker(temp);
	       break;
	     case 12:
	     //  imp_shaker(temp);
	      // break;

	      /* disp(temp);
	       break;
	     case 14:
	       dispmerge(temp,temp1,temp2);
	       break;
	     case 15:*/
	       return;
	     case 13:
	       quick(temp);
	       break;
	  }
       }
   }