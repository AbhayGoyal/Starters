#include<iostream.h>
#include<conio.h>
int maxmax(int a[],int l,int r)
{
   if(l==r)
     return a[l];
   int m=(l+r)/2;
   int u=maxmax(a,l,m);
   int v=maxmax(a,m+1,r);
   return u>v?u:v;
}


int minmin(int a[],int l,int r)
{
   if(l==r)
     return a[l];
   int m=(l+r)/2;
   int u=minmin(a,l,m);
   int v=minmin(a,m+1,r);
   return u<v?u:v;
}

int main()
{
   clrscr();
   int a[]={23,45,53,67,43};
   int n=sizeof(a)/sizeof(int);
   cout<<maxmax(a,0,n)<<endl;
   cout<<minmin(a,0,n)<<endl;
  return 0;
}