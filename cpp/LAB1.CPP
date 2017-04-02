#include<iostream.h>
#include<conio.h>
   struct stud
   {
     char name[30];
     int dob;
     int roll;
     double avg;
     int marks[3];
   }s[5];
   int n,flag=0;

   void get()
   {        int i,j;
      cout<<"Enter the number of students";
      cin>>n;
      for(i=0;i<n;i++)
      {
	cout<<"Enter your name"<<endl;
	cin>>s[i].name;
	cout<<"Enter the date of birth"<<endl;
	cin>>s[i].dob;
	cout<<"enter the roll no."<<endl;
	cin>>s[i].roll;
	cout<<"Enter the marks"<<endl;
	for(j=0;j<3;j++)
	{
	   cout<<"Enter the marks for "<<j+1<<" subject"<<endl;
	   cin>>s[i].marks[j];
	}
      }
   }

   void calc()
   {
      int i,j,sum=0;
      for(i=0;i<n;i++)
      {
	for(j=0;j<3;j++)
	{
	   sum=sum+s[i].marks[j];
	}
	 s[i].avg=(sum/3);

      }

      for(i=0;i<n;i++)
      {
	if(s[i].avg>90)
		flag++;
      }
      cout<<"No. of students having 90% and above are:"<<flag<<endl;
   }

   void disp()
   {
     int i,j;
     for(i=0;i<n;i++)
     {
       cout<<"The name of "<<i+1<<"student is:"<<s[i].name<<endl;
       cout<<"The date of birth of "<<i+1<<"student is: "<<s[i].dob<<endl;
       cout<<"The roll no. of "<<i+1<<"student is: "<<s[i].roll<<endl;
       cout<<"The marks of student is: "<<endl;
       for(j=0;j<3;j++)
       {
	  cout<<s[i].marks[j]<<endl;
       }
       //calc();
       //cout<<"The average of the student is: "<<s[i].avg<<endl;
   }
   }
   void main()
      {
	clrscr();
	int ch;
	while(1)
	{
	cout<<"1.Get details\n2.Calculate\n3.Display\n4.Return\n";
	cout<<"Enter your choice";
	cin>>ch;
	   switch(ch)
	   {
	      case 1:
		get();
		break;
	      case 2:
		calc();
		break;
	      case 3:
		disp();
		break;
	      case 4:
		return;
	   }
	}
      }