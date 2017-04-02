#include<stdio.h>
#include<conio.h>
  void main()
  {
    char str[50],str1[50]; int k,i,j,l,e,p;
    clrscr();
    printf("Enter the string\n");
    gets(str);

    for(i=0;str[i]!=NULL;i++)
    {
      if(str[i]==' ' && str[i+1]==' ')
      {
	for(j=i;str[j]==' ';j++);
       //	printf("%d",j);
	for(k=j;str[k]!=' ';k++);
	p=i+1;
       //
       //	printf("%d",k);
	while(j!=k)
	{
	  str[p]=str[j];
	  p++;
	  j++;
	}

      }


    }
     str[i]=NULL;
    for(i=0;str[i]!=NULL;i++)

      printf("%c",str[i]);

   /* for(i=0;i<1;i++)
    {
      printf("%c.",str[i]);
    }

    for(l=0;str[l]!=NULL;l++)
    {
       if(str[l]==' ')
	 d++;

    }
   // printf("%d\n",d);
     d--;


    for(i=0;str[i]!=NULL;i++)
    {
       if(d!=0 && str[i]==' ')
       {
	 printf("%c.",str[i+1]);
	 d--;
       }
    }

     for(i=l;i>0;i--)
    {
	if(str[i]==' ')
	{
	   e=i;
	   break;
	}
    }

    for(i=e;str[i]!=NULL;i++)
    {
       printf("%c",str[i]);

    }*/

    }