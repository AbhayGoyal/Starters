#include<graphics.h>
#include<stdio.h>
#include<conio.h>
  void main()
  {
     int gd=DETECT,gm=DETECT;    clrscr();
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    // line(50,50,80,50);
     rectangle(10,40,70,80);
     rectangle(70,40,120,80);
     outtextxy(120,60,"------>");
     int a=12;
     char c[]=(char)a;

     outtextxy(30,60,"12");
     getch();
     closegraph();
  }