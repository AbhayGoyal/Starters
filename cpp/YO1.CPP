#include<iostream.h>
#include<conio.h>
  class Shape {  
 public:
    double x, y;  

    void set_dim(double i, double j) {  
      x = i;  
      y = j;  
    }  
    virtual void show_area(void) {  }
  } ;  
       
  class triangle : public Shape {  
    public:  
      void show_area(void) {  
        cout << "\nTriangle with height ";  
        cout << x << " and base " << y;  
        cout << " has an area of ";  
        cout << x * 0.5 * y << ".\n";  
      }  
  };  
       
  class square : public Shape {  
    public:  
      void show_area(void) {  
        cout << "Square with dimensions ";  
        cout << x << "x" << y;  
        cout << " has an area of ";  
        cout << x *  y << ".\n";  
       }  
  };  
       
  class circle : public Shape {  
    public:  
      void show_area(void) {  
        cout << "Circle with radius ";  
        cout << x;  
        cout << " has an area of ";  
        cout << 3.14 * x * x;  
      }  
  } ;  
       
 int main()  
  {     clrscr();
    Shape *p;  
    triangle t; 
    square s;  
    circle c;  
     double x,y;  
    cout<<"AREA CALCULATION OF TRIANGLE ,SQUARE,CIRCLE RESPECTIVELY\n\n\n";
	cout<<"Kindly Enter The Reqiured values of \n\n" ;
	cout<<" x: ";
	cin>>x;
	cout<<" y: ";
	cin>>y;
	
	p= &t;
    p->set_dim(x,y);  
    p->show_area();  
       
    p = &s;  
    p->set_dim(x,y);  
    p->show_area();  
       
    p = &c;  
    p->set_dim(x,y);  
    p->show_area();  
    getch();
    return 0; 
} 
