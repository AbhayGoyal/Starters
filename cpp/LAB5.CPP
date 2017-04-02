#include<iostream.h>
#include<conio.h>
   double volume(float r)
   {
       return 4*3.14*r*r*r;
   }

   double volume(int r,int h)
   {
	  return 3.14*r*r*h;
   }

   int volume(int s)
   {
     return s*s*s;
   }

   int main()
   {
      clrscr();
      int ch,r,h,s;
      cout<<"1.Cone\n2.Sphere\n3.Cube\n";
      cout<<"Enter your choice";
      cin>>ch;
      switch(ch)
      {
	 case 1:
	   cout<<"Enter the radius and height";
	   cin>>r>>h;
	   cout<<"The volume of cone is:"<<volume(r,h);

	   break;
	 case 2:
	   cout<<"Enter the radius";
	   cin>>r;
	   cout<<"The volume of sphere"<<volume(r);
	    break;
	 case 3:
	   cout<<"Enter the side";
	   cin>>s;
	   cout<<"The volume of cube is:"<<volume(s);
	   break;
      }
      getch();
      return 0;
   }

