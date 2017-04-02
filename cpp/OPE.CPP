#include<iostream.h>
#include<conio.h>

   class dis
   {
      public:
	 int c,d;
	 dis()
	 {
	   c=0;d=0;
	 }
	 dis(int d1,int d2)
	 {
	    c=d1;
	    d=d2;
	    cout<<c<<" "<<d;
	 }
	 dis(dis &e)
	 {
	    c=e.c;
	    d=e.d;
	    cout<<c<<" "<<d;
	 }
   };
   void main()
   {
       clrscr();
       dis c();
       dis c1(5,7);
       dis c2(c1);
   }
