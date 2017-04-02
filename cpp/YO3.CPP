#include<iostream.h>
#include<conio.h>
  class Shape {
 public:
    double x, y,z;  

    void set_dim(double i, double j,double k) {  
      x = i;  
      y = j; 
	  z =  k; 
    }  
    virtual void show_vol(void) {  }
  } ;  
       
  class cone : public Shape {  
    public:  
      void show_vol(void) {  
        cout << "\nCone with height ";  
        cout << x << " and base radius " << y;  
        cout << " has a volume of ";  
        cout << x * 0.33 * y * y *3.14 << ".\n";  
      }  
  };  
       
  class cube : public Shape {  
    public:  
      void show_vol(void) {  
        cout << "cube(or cubiod) with dimensions ";  
        cout << x << "x" << y << "x" << z;
        cout << " has a volume of  ";  
        cout << x *  y * z<< ".\n";  
       }  
  };  
       
  class sphere : public Shape {  
    public:  
      void show_vol(void) {  
        cout << "Sphere with radius ";  
        cout << x;  
        cout << " has a volume of ";  
        cout << x * x * x*3.14*1.33;  
      }  
  } ;  
       
 int main()  
  {         clrscr();
    Shape *p;  
    cone t; 
    cube s;  
    sphere c;  
     double x,y,z;  
    cout<<"VOLUME CALCULATION OF  CONE,CUBE AND SPHERE RESPECTIVELY\n\n\n";
	cout<<"Kindly Enter The Reqiured values of \n\n" ;
	cout<<" x: ";
	cin>>x;
	cout<<" y: ";
	cin>>y;
	cout<<" z: ";
	cin>>z;
	
	p= &t;
    p->set_dim(x,y,z);  
    p->show_vol();  
       
    p = &s;  
    p->set_dim(x,y,z);  
    p->show_vol();  
       
    p = &c;  
    p->set_dim(x,y,z);  
    p->show_vol();  
    getch();
    return 0;  
  }