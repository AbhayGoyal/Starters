#include<stdio.h>
#include<conio.h>
   void disp(char *,int,int,int,int,int);
   void main()
      {
	  int i;
	   struct dob
	    {
	      int dd;
	      int mm;
	      int yy;

	    };
	  struct marks
	  {
	    char name[30];
	    int roll;
	    int age;
	    struct dob s1;
	    }s[1];

	  clrscr();

	  printf("Enter the name,roll no and age of students\n");
	  for(i=0;i<1;i++)
	  {
	    scanf("%s",s[i].name);
	    scanf("%d",&s[i].roll);
	    scanf("%d",&s[i].age);
	    scanf("%d",&s[i].s1.dd);
	    scanf("%d",&s[i].s1.mm);
	    scanf("%d",&s[i].s1.yy);
	  }
	  for(i=0;i<1;i++)
	  {
	   disp(s[i].name,s[i].roll,s[i].age,s[i].s1.dd,s[i].s1.mm,s[i].s1.yy);
	  }
	  }
	  void disp(char *p,int roll,int age,int dd,int mm,int yy)
	  {
	   int i,j;
	   printf("The details entered are:-");
	   printf("%s",p);
	    printf("%d\t",roll);
	    printf("%d\t",age);
	    printf("%d-%d-%d\t",dd,mm,yy);
	    printf("\n");
	  }

      //	  getch();
