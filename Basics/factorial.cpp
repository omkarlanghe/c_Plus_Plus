#include<iostream>

void factorial()
{	
	int limit,fact = 1;
	std::cout<<"Enter the limit for your factorial:\n"<<std::endl;
	std::cin>>limit;
	
	for(int i = 2 ; i<=limit ; i++)
	{
		fact = fact*i;
		std::cout<<"Factorial of the given number is:"<<fact<<"\n"<<std::endl;
	}
}

int main()
{
	factorial();
	return 0;
}
