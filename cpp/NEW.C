#include<stdio.h>
#include<conio.h>
   void main()
      {
	char arr[30]; int k,j,l,i,s,t;
	clrscr();
	printf("Enter the string\n");
	gets(arr);
	for(l=0;arr[l]!=NULL;l++);

	for(i=0;i<l;i++)
	{
	  if(arr[i]==' ' && arr[i+1]==' ')
	  {
	      k=i;
	      s=i+1;

	    while(arr[k]==' ')
	    {
		k++;
	    }
		 t=k;
	    for(j=t;arr[j]!='\0';j++)
	    {
	       arr[s]=arr[j];
	       s++;
	    }
	    arr[s]=NULL;
	 }

	}

	printf("new string %s   ",arr);
	getch();
      }