#include<stdio.h>
#include<conio.h>
  void main()
  {
    char str[50],str1[50];int i,k=0,e,j,p,d=0,z;
    clrscr();
    printf("Enter string");
    gets(str);        e=0;

    for(i=0;str[i]!=NULL;i++)
    {
       if(str[i]==' ')
       {
	e=i;


	 for(j=e-1;j>=0;j--)
	 {
	    str1[d]=str[j];
	    d++;
	 }
	 break;
       }
   }
       //d++;

   for(i=e;str[i]!=NULL;i++)
   {
	 if(str[i]==' ')
	 {
	   k=i;
	   for(p=k;p>=e;p--)
	 {
	    str1[d]=str[p];
	    d++;
	 }
	 e=k;
	 }
    }
    for(j=i-1;j>=e;j--)
    {
      str1[d]=str[j];
      d++;
    }
	 str1[d]=NULL;
    for(i=0;str1[i]!=NULL;i++)
    {
      printf("%c",str1[i]);
    }

  }