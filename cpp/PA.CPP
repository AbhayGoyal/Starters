#include<iostream.h>
#include<conio.h>
#include<time.h>
    class student
    {
       public:
	 char name[30];
	 void getdata()
	 {
	   cout<<"Enter the name";
	   cin>>name;
	 }
    };

    class teacher:public student
    {
       public:
	 char teachername[30];
	 void get()
	 {
	    cout<<"Enter the teacher name";
	    cin>>teachername;
	 }
    };

    int main()
    {
       clock_t end,start;
       int n=2,i;
       teacher t[2];
       start=clock();
       for(i=0;i<n;i++)
       {
	 t[i].getdata();t[i].get();
	 cout<<"Student name :"<<t[i].name;
	 cout<<"Teacher name :"<<t[i].teachername;
	 //for(long long int j=0;j<100000000;j++);
       }
       end=clock();
       cout<<"\n"<<(end-start)/CLK_TCK<<" ";
       return 0;
    }