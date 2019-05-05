#include<iostream>
#include<vector>

int main(void)
{
	std::vector<int> _ivec(10);
	int size;


	for(std::vector<int>::iterator iter = _ivec.begin() ; iter != _ivec.end() ; iter++)
	{
		std::cin>>*iter;
	}
	for(std::vector<int>::iterator iter = _ivec.begin() ; iter != _ivec.end() ; iter++)
	{
		std::cout<<*iter<<std::endl;
	}
	return(EXIT_SUCCESS);
}
