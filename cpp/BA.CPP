#include<conio.h>
#include<iostream.h>

   class bank
   {
       public:
       int amt,t,accno;
       char name[20];

       bank()
       {
	  amt=1000;
       }
       void getdata()
       {
	  cout<<"Enter the name";
	  cin>>name;
	  cout<<"Enter account number";
	  cin>>accno;
       }
       bank operator +(bank b)
       {
	  bank temp;
	  temp.amt=amt+b.t;
	  cout<<"The new amount is"<<temp.amt;
	  return temp;
       }
       bank operator -(bank b)
       {
	  bank temp;
	  if(b.t>amt)
	  {
	    cout<<"Sorry not possible" ;
	    return b;
	  }
	  temp.amt=amt-b.t;
	  if(temp.amt<1000)
	  {
	    cout<<"Sorry minimum balance has to be 1000";
	    temp.amt=amt+b.t;
	    return b;
	  }
	  cout<<"The new amount is"<<temp.amt;
	  return temp;
       }

       void result()
       {
	  cout<<"The name of user is:";
       }

   };

   void main()
   {
      clrscr();
      bank b1,b2,ba;char ch;int ch1;
      cout<<"***********Welcome************\n";
      cout<<"Enter your details\n";
      ba.getdata();
      while(1)
      {
	cout<<"1.Debit\n2.Credit\n3.Exit\n";
	cin>>ch1;
	switch(ch1)
	{
	   case 1:
	      cout<<"Enter the amount to be credited";
	      cin>>b1.t;
	      ba=ba+b1;
	      cout<<"Do you want to continue";
	      cin>>ch;
	      if(ch=='y')
	      break;
	      else
	      return;
	   case 2:
	      cout<<"Enter the amount to be debited";
	      cin>>b2.t;
	      ba=ba-b2;
	      cout<<"Do you want to continue";
	      cin>>ch;
	      if(ch=='y')
		 break;
	      else
		 return;
	   case 3:
	     return;
	}
      }
   }
