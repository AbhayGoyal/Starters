#include<iostream.h>
#include<conio.h>

   class num
   {
     public:
     int r,s,l,b;
     void circ()
     {
       cout<<"Enter the value";
       cin>>r;
       cout<<3.14*r*r;
     }

     void squ()
     {
	cout<<"Enter the values";
	cin>>s;
	cout<<s*s;
     }

     void rect()
     {
	cout<<"Enter the values";
	cin>>l>>b;
	cout<<l*b;
     }
   };

   class square:public num
   {
      public:
      void squ()
      {        int s;
	cout<<"Derived class";
	cout<<"Enter the value";
	cin>>s;
	cout<<s*s;
      }
   };

   class rectangle:public num
   {
      public:
      void rect()
      {        int l,b;
	cout<<"Derived class";
	cout<<"Enter the value";
	cin>>l>>b;
	cout<<l*b;
      }
   };

   class circle:public num
   {
      public:
      void circ()
      {        int r;
	cout<<"Derived class";
	cout<<"Enter the value";
	cin>>r;
	cout<<3.14*r*r;
      }
   };

   void main()
   {          clrscr();
      rectangle r;circle c;square re;
      //num *n;
      cout<<"This was rectangle";
      r.rect();
      cout<<"This was circle";
      c.circ();
      cout<<"This is square";
      re.squ();
      getch();
   }