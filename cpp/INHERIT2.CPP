#include<iostream.h>
#include<conio.h>
   class plus
   {
      public:
	int real,imag;
	plus()
	{
	   real=0;
	   imag=0;
	}
	plus(int x,int y)
	{
	  real=x;
	  imag=y;
	}
	void disp()
	{
	   cout<<real<<"+j"<<imag;
	}
	plus operator +(plus p)
	{
	   plus temp;
	   temp.real=real+p.real;
	   temp.imag=imag+p.imag;
	   return temp;
	}

   };


   void main()
   {
       plus p1(11,10),p2(12,13);
       plus p3;
       p3=p1+p2;
       cout<<"First one";
       p1.disp();
       cout<<"Second one";
       p2.disp();
       cout<<"Last one";
       p3.disp();
   }