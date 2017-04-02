#include<iostream.h>
#include<conio.h>
   class bank
   {
     public:
       int accno,n,custid,balance,trans;
       char name[20];
       void getdata();
       void check();
       void transactiondebit();
       void transactioncredit();
       void disp();
       bank()
       {
	 balance=1000;
	 trans=0;
       }
   };

   void bank::getdata()
   {
     if(trans==0)
     {
	cout<<"Enter the account number"<<endl;
	cin>>accno;
	cout<<"Enter the customer id"<<endl;
	cin>>custid;
	cout<<"Enter some balance amount"<<endl;
	cin>>balance;
	if(balance>500)
	{
	   cout<<"Sorry enter the balance amount atleast more than 500 ";
	   cin>>balance;
	}
     }
     else
     {
       cout<<"Your details are complete";
       return;
     }
   }

   void bank::check()
   {
      if(trans==0)
	cout<<"New Account";
      else
	cout<<"Old acoount";
   }

   void bank::transactioncredit()
   {           int amt;
      cout<<"Enter the amount of transaction to be done:\n";
      cin>>amt;
      if(amt>5000)
      {
	cout<<"Sorry transaction is not possible"<<endl;
	cout<<"Amount should be less than 5000"<<endl;
	return;
      }
      else
      {
	 balance=balance+amt;
	 trans++;
	 cout<<"New balance is:"<<balance<<endl;
      }
   }

   void bank::transactiondebit()
   {
      int amt;
      cout<<"Enter the amount you want to debit"<<endl;
      cin>>amt;
      int rem=balance-amt;
      if(balance==0)
      {
	cout<<"Sorry no transaction possible"<<endl;
      }
      if(rem<500)
      {
	   cout<<"Sorry transaction not possible"<<endl;
	   return;
      }
      else
      {
	 cout<<"Transaction done successfully"<<endl;
	 cout<<"Now remaining balance is:"<<rem<<endl;
	 trans++;
	 return;
      }
   }

   void main()
   {
      clrscr();
      int i;
      bank b;

      while(1)
      {
	 if(b.trans==0)
	 {
	    cout<<"Enter the bank details"<<endl;
	    b.getdata();
	 }
	cout<<"Do you want to do a transacation? (y/n)"<<endl;char ch;
	 cin>>ch;
	 if(ch=='y')
	 {
	   if(b.balance==0)
	   {
	     cout<<"Sorry not possible"<<endl;
	   }
	   else
	   {
	     cout<<"Do you want to credit to your account(y/n)"<<endl;char ch1;
	     cin>>ch1;
	     if(ch1=='y')
		b.transactioncredit();
	     else
		b.transactiondebit();
	   }
       }
       else
       {
	  cout<<"Ok. Thanks";
	  return;
       }
      }
   }