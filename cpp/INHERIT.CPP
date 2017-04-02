#include<iostream.h>
#include<conio.h>
   class shape
   {
      protected:
	 int weight;
	 int height;
      public:
	 void set(int,int);
   };
   void shape::set(int w,int h)
   {
     weight=w;height=h;
   }

   class rectangle:public shape
   {
      public:
	void calc()
	{
	   cout<<"Area is:"<<weight*height;
	}
   };
  // void rectangle::calc()

   int main()
   {
      clrscr();
      rectangle r;
      r.set(5,7);
      r.calc();
      return 0;
   }
