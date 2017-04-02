#include<iostream.h>
#include<conio.h>
int a[50],max,min;

void find(int i,int n)
{
   int mid,max1,min1;

   if(i==n)
     max=min=a[i];
   else if(i==n-1)
   {
     if(a[i]>=a[n-1])
     {
       max=a[i];
       min=a[n-1];
     }
     else
     {
       max=a[n-1];
       min=a[i];
      }
   }
   else
   {
     mid=(i+n)/2;
     find(i,mid);
     max1=max;
     min1=min;
     find(mid+1,n);
     if(max<max1)
	 max=max1;
     if(min>min1)
	 min1=min;
   }
}

int main()
{
   int i,n;
   clrscr();
   cout<<"Enter size of array:" ;
   cin>>n;

   cout<<"Enter elements in array-->\n";
   for(i=0;i<n;i++)
      cin>>a[i];

   max=min=a[0];
   find(0,n-1);

   cout<<"Minimum"<<min;
   cout<<"\nMaximum"<<max;

   return 0;
}