#include<stdio.h>
#include<conio.h>
//User account
//Airplane views
//Select dates,no. of people
//Select payment mode
//Payment made

  struct airplane
  {
     int airplane_id;
     int seating capacity;
     int fare;
     double datedepart;
     double dataarrive;
  }air;

  struct user
  {
     int userid;
     char name[30];
     int age;
     char gend;
     int no_of_passengers;
     int trips;
     int total_fare;
  }use;

  void setuserdata()
  {
      clrscr();
      printf("Enter your name");
      scanf("%s",use.name);
      fprintf(fair,"%s\n");
      printf("Enter your age");
      scanf("%d",&use.age);
      fprintf(fair,"%d\n");
      printf("Enter your gender");
      scanf("%c",&use.gen);
      fprintf(fair,"%c\n");
      printf("Enter the number of passengers travelling");
      scanf("%d",&use.no_of_passengers);
      fprintf(fair,"%d\n");
      printf("Thank u fr your details now fuck off");
  }

  void getuserdata()
  {
     FILE *fsearch;char *str[30];
     fsearch=fopen("User details.txt","a+");)
     if(fsearch==NULL)
       return;
     while(fgets(str)




  }

  void main
  {
     FILE *fair,*fuser;char ch;
     fuser=fopen("User details.txt","a");
     if(fuser==NULL)
	return;
     printf("Are u an exisiting user....??(y/n)");
     scanf("%c",ch);
     if(ch=='n')
     {
	getuserdata();
     }
     if(ch=='y')
     {
       printf("Enter the userid");







  }


