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
      derived d;
      d.con();
      return 0;
   }