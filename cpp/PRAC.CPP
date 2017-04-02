#include<iostream.h>
#include<conio.h>

  class prac
  {
    int square,cu;
    public:
      /*void calculate(int n)
      {
	square=n*n;
	cu=n*n*n;
      }*/
      inline sq(int n)
      {
	 return n*n;
      }
      inline cube(int n)
      {
	 return n*n*n;
      }
      friend void disp(prac,int,int);
  };

  void disp(prac p,int val1,int val2)
  {
      cout<<val1;
      cout<<val2;
  }

  int main()
  {

     prac p;int val1,val2;
     //p.calculate(4);
     val1=p.sq(2);
     val2=p.cube(2);
     disp(p,val1,val2);

      return 0;
  }