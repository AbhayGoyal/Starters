#include<iostream.h>
#include<conio.h>
  class ops
  {
     double num;
     ops()
     {
       cout<<"Enter the value";
       cin>>num;
     }
     ops operator *(ops b)
     {
	temp.a=a*b.a
	return temp;
     }
     ops operator +(ops b)
     {
	temp.a=a+b.a
	return temp;
     }
     ops operator -(ops b)
     {
	temp.a=a-b.a
	return temp;
     }
     ops operator /(ops b)
     {
	temp.a=a/b.a
	return temp;
     }

  }


  void main()
  {
    int ch
    ops s1,s2,s3;
    s1();
    s2();
    switch(ch)
    {
       case 1:
	 temp=s1+s2;break;
       case 2:
	 temp=s1-s2;break;
       case 3:
	 temp=s1*s2;break;
       case 4:
	 temp=s1/s2;break;
       case 5:
	 return;

    }
    cout<<"The value is"<<temp.a;

  }