#include<iostream.h>
#include<conio.h>
   class sal
   {
      int bp;
      float da,hra,gs;
      public:
      sal()
      {
	 bp=0;
      }
      void getdata()
      {
	cout<<"Enter the basic salary";
	cin>>bp;
      }

      void calc()
      {
	 da=0.4*bp;
	 hra=0.2*bp;
	 gs=bp+hra+da;
      }

      void disp()
      {
	cout<<"The DA is:"<<da;
	cout<<"The HRA is:"<<hra;
	cout<<"Thegross salry is:"<<gs;
      }
      ~sal(){}
   };

   void main()
   {
      sal emp;
      emp.getdata();
      emp.calc();
      emp.disp();
      getch();
   }