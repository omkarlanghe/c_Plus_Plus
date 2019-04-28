#include<iostream>
int foo();
int main()
{
	for(int i = 0 ; i < 10 ; i++)
	{
		std::cout<<foo()<<std::endl;
	}
	return(EXIT_SUCCESS);
}
int foo()
{
	static int globalToAll = 0;
	return globalToAll++;
}
