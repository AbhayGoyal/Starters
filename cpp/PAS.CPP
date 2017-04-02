#include<iostream.h>
#include<conio.h>

   class base
   {
      public:
      virtual void con()
	{
	   cout<<"Base";
	}
   };

   class derived:public base
   {
      public:
	void con()
	{
	  cout<<"Derived";
	}
   };

   int main()
   {
     clrscr();
      base *b;
      derived d;
      b->con();
      b=&d;
      b->con();
      int i;
      cin>>i+4;
      return 0;
   }