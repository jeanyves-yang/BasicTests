#include "AddNumbers.h"
#include <iostream>

int main( int argc, char* argv[] )
{
	float a[] = {4,-5,12354654, -12354656};
	float b[] = {5,-4,    -654, 112354656};
	float result[] = {9, -9, 12354000, 100000000};

	for( unsigned int i = 0 ; i < 3 ; i++)
	{
		
		float sum = addition(a[i],b[i]);
		if( sum != result[i] )
		{
			std::cout <<"Error: " << sum << " != " << result[i] << std::endl;  
			return -1;
		}
	}
	std::cout << "OK" << std::endl; 
	return 0;
}
		
