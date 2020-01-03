#include<iostream>
#include<cmath>

using namespace std ;

const float e = 2.71828 ;

float FineY(float x)
	{
		float y = (3*pow(x,3))+(2*e)+pow(2,2*x+1)+pow(pow(x,2)+1,0.5);
		return y ;
	}
	
int main()
	{
		int x;
		
		cout<<"Enter x = ";
		cin>> x ;
		cout<<"Result y = "<< FineY(x) ;
		
		return 0;
	}
