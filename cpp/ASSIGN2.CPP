#include<iostream.h>
#include<conio.h>
   class employee
   {
     public:
      long int empno;
      char name[50];
      char design[50];
      //public:
	 void getdata1()
	 {
	    cout<<"Enter your empno"<<endl;
	    cin>>empno;
	    cout<<"Enter your name"<<endl;
	    cin>>name;
	    cout<<"Enter the designation"<<endl;
	    cin>>design;
	 }
   };

   class qualification:public employee
   {
       public:
	 int ch;
	void getdata2()
	{
	  cout<<"1.UG 2.PG 3.Experienced"<<endl;
	  cin>>ch;
	}
   };

   class salary:public qualification
   {
       public:
      int bsalary;
      int fsalary;
	void getdata3()
	{
	   cout<<"Enter the basic pay"<<endl;
	   cin>>bsalary;
	}
	void calc()
	{
	   if(ch==1)
	     fsalary=bsalary+2000;
	   if(ch==2)
	     fsalary=bsalary+3000;
	   if(ch==3)
	     fsalary=bsalary+4000;
	}
	void disp()
	{
	   cout<<"The employee number of employee is:"<<empno<<endl;
	   cout<<"The name of the emloyee is:"<<name<<endl;
	   cout<<"The designation of employee is:"<<design<<endl ;
	   cout<<"The basic salary of employee is:"<<bsalary<<endl;
	   cout<<"The final salary is:"<<fsalary<<endl;
	}
   };

   int main()
   {
     clrscr();
      salary sal;
      sal.getdata1();sal.getdata2();sal.getdata3();
      sal.calc();sal.disp();getch();
       return 0;


   }
