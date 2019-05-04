#include<iostream>

int function(const int a, const int b)
{
	std::cout<<a<<" "<<b<<std::endl;
	return(a+b);
}

float function(const int a, const float b, const int c = 5)
{
	std::cout<<a<<" "<<b<<" "<<c<<std::endl;
	return(a+b+c);
}

double function(const int a, const double b)
{	
	std::cout<<a<<" "<<b<<std::endl;
	return(a+b);
}

int main(void)
{
	std::cout<<"overloading 1: "<<function(10,20)<<std::endl;
	std::cout<<"overloading 2: "<<function(10,20.22)<<std::endl;
	std::cout<<"overloading 2: "<<function(5,5.2)<<std::endl;
	return(EXIT_SUCCESS);
}
/*
 * Though we thing the above code is an example of function overloading, internally it is not overloading the function. Compiler internally generates unique name for each function which is known as name mangling
*/
