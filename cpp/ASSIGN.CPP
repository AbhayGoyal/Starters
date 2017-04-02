Q1.

	#include<iostream.h>
	#include<conio.h>
  	class ops
  	{
    		public:
     		double num1,num2;
     		ops(){}
     		ops(int num1,int num2)
    		 {
       			num1=num1;
       			num2=num2;
		     }
     		ops operator *(ops b)
     		{
			ops temp;
			temp.num1=num1*b.num1;
			temp.num2=num2*b.num2;
			return temp;
     		}
     		ops operator +(ops b)
    		 {
			ops temp;
			temp.num1=num1+b.num1;
			if(num2==b.num2)
	  		temp.num2=num2;
			return temp;
     		}
     		ops operator -(ops b)
     		{
			ops temp;
			temp.num1=num1-b.num1;
			if(num2==b.num2)
	   		temp.num2=num2;
			return temp;
     		}
     		ops operator /(ops b)
     		{
			ops temp;
			temp.num1=num1*b.num2;
			temp.num2=num2*b.num1;
			return temp;
     		}
  	};

		  void main()
		  {
    			clrscr();
    			int ch;//double a,b;
    			//cout<<"Enter the values";
    			//cin>>a>>b;
    			ops s1,s2,c;
    			s1=ops(3,5);
    			s2=ops(3,5);
   			 c=s1+s2;
    			cout<<c.num1<<"/"<<c.num2<<endl;
   			 c=s1-s2;
  			  cout<<c.num1<<"/"<<c.num2<<endl;
   			 c=s1*s2;
    			cout<<c.num1<<"/"<<c.num2<<endl;
			    c=s1/s2;
    			cout<<c.num1<<"/"<<c.num2<<endl;
  			  getch();
  		}