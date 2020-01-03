#include<iostream>

using namespace std;

//Write function findDistance() here

float findDistance(float u,float a,float t)
	{
		float s = (u*t)+(0.5*a*(t*t));
		return s ;
	}
int main()
	{

  		//Calling findDistance() using test cases
		
		cout<<findDistance(0,0.5,1)<<endl;
		
		cout<<findDistance(1.5,-1,2)<<endl;
	
		cout<<findDistance(5,4,3)<<endl;
		
		
  		return 0;
	}
