#include<iostream.h>
#include<conio.h>
class line
{
   public:
              inline float add_meter(float x,float y)
              {
                            return(x+y);
              }
              inline float add_centimeter(float a,float b)
              {
                            return(a+b);
              }
}; 


class  base
{
    
   public:
   	float a,b,c,d;
    void get(float val1,float val2,float val3,float val4)
    {
       a=val1;
       b=val2;
       c=val3;
       d=val4;
    }
    friend float sub_metre(base ob);
    friend float sub_centimetre(base ob);
};
float sub_metre(base ob)
{
   return float(ob.a-ob.b);
}
float sub_centimetre(base ob)
{
	
	return float(ob.c-ob.d);
}

int main()
{
	      clrscr();
              line obj2;
              float val1,val2,val3,val4;
              base obj;   
              cout<<"Enter two values (in meters):";
              cin>>val1>>val2;
              cout<<"Enter two values (in centimeters):";
              cin>>val3>>val4;
              obj.get(val1,val2,val3,val4);
              cout<<"\n   value After adding distances in meters        is:"<<obj2.add_meter(val1,val2);
              cout<<"\n   value After adding distances in centimeters   is  :"<<obj2.add_centimeter(val3,val4)<<"\n";
              cout<<"\n   value After subtracting distances in meters    is  :"<<sub_metre(obj)<<"\n";
              cout<<"\n   value After subtracting distances in centimeters    is:"<<sub_centimetre(obj)<<"\n";
	      getch();
	      return 0;
}