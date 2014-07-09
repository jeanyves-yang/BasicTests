#include <cstdlib>
#include <sstream>
#include <iostream>

/*template <typename T>
T addition(T a, T b)
{
	std::cout << a << " + " << b << " = " << a+b <<std::endl;
	return a+b;
}*/

float addition(float a, float b)
{
	std::cout << a << " + " << b << " = " << a+b <<std::endl;
	return a+b;
}

int main( int argc, char* argv[] )
{
	if( argc != 3)
	{
		std::cout << "Error: 2 numbers required as input" << std::endl;
		return -1;
	}

	char* numchar1 = argv[1];
	char* numchar2 = argv[2];
	
	std::istringstream ss1( argv[1] );
	std::istringstream ss2( argv[2] );
	
/*	T num1, num2;	*/
	float num1, num2;
	
	if(!(ss1 >> num1)) 
	{
		std::cerr << "Invalid number " << argv[2] << '\n';
	}
	if(!(ss2 >> num2)) 
	{
		std::cerr << "Invalid number " << argv[2] << '\n';
	}

	return addition(num1,num2);	
}


