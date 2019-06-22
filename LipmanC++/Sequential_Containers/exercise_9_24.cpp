/*
 * write a program that fetches the first element in a vector. Do so using at, the subscript operator, front
 * and begin.
 */

#include<iostream>
#include<vector>

int main()
{
	std::vector<int> ivec;
	int ele;

	std::cout<<"enter the elements in vector"<<std::endl;
	while(std::cin>>ele)
	{
		if(ele == -1)
			break;
		ivec.push_back(ele);
	}

	if(ivec.empty())
	{
		std::cout<<"The vector is empty"<<std::endl;
	}
	else
	{
		std::cout<<"using subscript operator: "<<ivec[0]<<std::endl;
		std::cout<<"using front method: "<<ivec.front()<<std::endl;
		std::cout<<"using begin iterator: "<<*ivec.begin()<<std::endl;
	}
	return 0;
}
