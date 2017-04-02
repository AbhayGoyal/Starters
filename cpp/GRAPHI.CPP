#include<graphics.h>
#include<stdio.h>
#include<conio.h>
  void main()
  {
     int gd=DETECT,gm; int i;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

     line(100,50,100,50);
     getch();
     closegraph();


  }