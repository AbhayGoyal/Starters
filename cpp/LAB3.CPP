#include<iostream.h>
#include<conio.h>
  class bank
  {
     public:
	char name[30];
	long accno;
	int balance;
	int deduct;int add;
	bank()
	{
	   balance=1000;
	}
	void insert(int d,int a)
	{
	   deduct=d;
	   add=a;
	}
	bank operator +(bank b)
	{
	   bank temp;
	   temp.balance=balance+b.add;
	   return temp;
	}
	bank operator -(bank b)
	{
	   bank temp;
	   if(balance>b.balance)
	   {
	      cout<<"Sorry not possible";
	      return temp;
	   }
	   else
	   {
	      temp.balance=balance-b.deduct;
	      return temp;
	   }
	   //return temp;
	}
    };

    void main()
    {
	clrscr();
	 bank b1,b2,b3;
	 cout<<"Enter your details"<<endl;
	 cout<<"Enter the name"<<endl;
	 cin>>b1.name;
	 cout<<"Enter the account number"<<endl;
	 cin>>b1.accno;

      while(1)
      {
	 cout<<"Do you want to debit or credit(c/d)"<<endl;char ch;
	 cin>>ch;
	 //b1();
	 //b2();
	 if(ch=='c')
	 {
	    // b3=b1+b2;
	    int amt;
	     cout<<"Enter the amount to be credited\n";
	     cin>>amt;
	     b1.insert(amt,0);b2.insert(0,amt);
	     b3=b1+b2;
	     cout<<"Now the balance is"<<b3.balance<<endl;
	     continue;
	 }
	 if(ch=='d')
	 {
	    //b3=b1-b2;
	    int amt;
	     cout<<"Enter the amount to be debited\n";
	     cin>>amt;
	     b1.insert(0,amt);b2.insert(amt,0);
	     b3=b1-b2;
	     cout<<"Now the balance is"<<b3.balance<<endl;
	     continue;
	 }
      if(ch!='d'|| ch!='c')
	 {
	    cout<<"Sorry wrong input"<<endl;
	    return;
	 }
      }
    }
