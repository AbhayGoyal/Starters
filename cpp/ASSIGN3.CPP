#include<iostream.h>
#include<conio.h>
   class matrix
   {
      public:
       int n;
       int a[5][5];
       void getdata()
       {
	  int i,j;
	  cout<<"Enter the size of matrix\n";
	  cin>>n;
	  cout<<"Enter the values in matrix\n";
	  for(i=0;i<n;i++)
	  {
	    for(j=0;j<n;j++)
	    {
	       cin>>a[i][j];
	    }
	  }
       }
       void disp()
       {
	 int i,j;
	 cout<<"The matrix is:"<<endl;
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<2;j++)
	   {
	     cout<<a[i][j]<<"  ";
	   }
	   cout<<"\n";
	 }

       }

       void transpose()
       {
	  int i,j;
	  cout<<"The transpose of matrix is"<<endl;
	  for(i=0;i<n;i++)
	  {
	    for(j=0;j<n;j++)
	    {
	       cout<<a[j][i]<<"  ";
	    }
	    cout<<"\n";

	  }
       }

       void deter()
       {
	  int i,j;
	  int val=0;
	  if(n==2)
	    val=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
	  if(n==3)
	  {
	    val=a[0][0]*a[1][1]*a[2][2]-a[2][1]*a[1][2];
	    val=val-a[1][0]*a[1][0]*a[2][2]-a[1][2]*a[2][0];
	    val=val+a[2][0]*((a[1][0]*a[1][2])-(a[2][0]*a[1][1]));

	  }
	  cout<<"The determinant of the given matrix is:"<<val<<endl;
       }
     };

     int main()
     {
	clrscr();
	cout<<"This is the program for matrix operations"<<endl;
	matrix mat;
	mat.getdata();
	mat.disp();
	mat.transpose();
	mat.deter();
	getch();
	return 0;
     }