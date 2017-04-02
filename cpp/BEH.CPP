#include<iostream.h>
#include<conio.h>

   class bank
   {
      public:
	long int accno,t,amt;
	char name[30];
	bank()
	{
	   amt=1000;
	}

	bank operator +(bank b)
	{
	   bank temp;
	   temp.amt=amt+b.t;
	   cout<<"New amount is :"<<temp.amt;
	   return temp;
	}

	bank operator -(bank b)
	{
	   bank temp;
	   temp.amt=amt-b.t;
	   if(temp.amt<1000)
	   {
	      cout<<"Sorry not possible";
	      temp.amt=temp.amt+b.t;
	   }
	   cout<<"New amount is :"<<temp.amt;
	   return temp;
	}



   };
   int main()
   {
       bank ba,b1,b2;  int ch;
       cout<<"Enter your name:";
       cin>>ba.name;
       while(1)
       {
       cout<<"1.Credit\n2.Debit\n3.Exit";
       cin>>ch;
       switch(ch)
       {
	  case 1:
	    cout<<"Enter the amount to be credited";
	    cin>>b1.t;
	    ba=ba+b1;
	    break;
	  case 2:
	     cout<<"Enter the amount to be debited";
	     cin>>b2.t;
	     ba=ba-b2;
	     break;
	  case 3:
	     return 0;
       }
      }
       //return 0;
   }