#include<iostream.h>
#include<conio.h>

  class airplane
  {
     public:
	int airplane_id,seating capacity,fare;
	double datedepart,dataarrive;
	void airplaneinsert();
	void airplane display();
  }air;

  class user
  {
     public:
	int userid,age,no_of_passenger,trips,total_fare;
	char name[30],gend;
	void getdata();
	void dispdata();
	void setdata();
  }use;

  void main
  {
     FILE *fair,*fuser;char ch;
     fair=fopen("Airplane details.txt","w");
     if(fair==NULL)
	return;
     printf("Are u an exisiting user....??(y/n)");
     scanf("%c",ch);
     if(ch=='n')
     {
	 printf("Enter your name");
	 scanf("%s",use.name);
	 printf("Enter your age");
	 scanf("%d",&use.age);
	 printf("Enter your gender");
	 scanf("%c",&use.gen);
	 printf("Enter the number of passengers travelling");
	 scanf("%d",&use.no_of_passengers);

     }
     if(ch=='y')
     {
       printf("Enter the userid");







  }

