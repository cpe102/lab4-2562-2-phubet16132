#include<iostream>


using namespace std ;


float findDivisor(int num1)
	{
		int i=2;
		
		
		if(num1 > 1)
		{
			while(i > 1 && i < num1)
			{
				if(num1 % i !=0)
				{
					i=i+1;
				} 
				else
				{
					return i ;
				}		
			}
			
		}
		else 
		{
			return -1 ;
		}
		
		
	}



int main()
{
	int num1 ;
	
	cout<<"Enter num1 = ";
	cin>>num1;
	cout<<findDivisor(num1);
	
	
	return 0 ;
}	
