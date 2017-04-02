#include<iostream>
using namespace std;

int main()
{
	
	double feet;
	double inches;
	double result;
	cout<<" FEET INCHES TO CENTIMETER CONVERTER\n\n";
	cout<<" Enter the values of feet and inches respectively\n";
	cout<<" Feet: ";
	cin>>feet;
	cout<<" Inches: ";
	cin>>inches;
	result=feet/inches;
	
  
	try
	{
		if(result>0&&feet>0&&inches>0)
		
		{   cout<< "The given length You Have Entered Is "<<feet<<"."<<inches<<" feet\n";
			cout<<"The result----\n";
			cout<<" the given length is "<< 2.54*inches + 30.48*feet<< " centimeters\n";
			
			
		}
		
		else
		{
			throw(result);
		}
		
	}
	
	 catch( double u)
	 {
	 	double s;
	 	double y;
	 	cout<<"Exception has been caught \n ";
	 	cout<<"Enter the values of feet and inches respectively having positive values\n ";
	 	cout<<" Feet: ";
	 	cin>>s;
	 	cout<<" Inches: ";
	 	cin>>y;
	 	cout<<"The given length is "<< 2.54*y+ 30.48*s<< "centimeters\n";
		  
	 	
	 }
	 
	 cout<<"END OF THE PROGRAM";
	 
	
	return 0;
}
