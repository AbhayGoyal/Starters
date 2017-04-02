#include<conio.h>
#include<stdio.h>
   void main()
   {
      int i,j,a[8],pivot,temp;
      pivot=a[7];
      for(i=0;i<8;i++)
      {
	 scanf("%d",&a[i]);
      }
      j=7;
      for(i=0;i<8;i++)
      {
	 if(a[i]>pivot)
	 {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	   j=i;
	 }

      }
      for(i=0;i<8;i++)
      {
	printf("%d",a[i]);
      }




   }
