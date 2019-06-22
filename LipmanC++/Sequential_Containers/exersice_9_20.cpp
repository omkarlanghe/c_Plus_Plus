/*
 * write a program to compare whether a vector<int> contains the same elements as a list<int>
 */

#include<iostream>
#include<vector>
#include<list>

int main()
{
	int ele;
	bool status = false;

	std::vector<int> ivec;
	std::vector<int> ivec2;
	std::list<int> ilist;

	std::cout<<"Enter the elements in the vector container"<<std::endl;
	while(std::cin>>ele)
	{
		if(ele == -1)
		{
			break;
		}
		else
		{
			ivec.push_back(ele);
		}
	}
	std::cout<<"Enter the elements in the list container"<<std::endl;
	while(std::cin>>ele)
	{
		if(ele == -1)
		{
			break;
		}
		else
		{
			ilist.push_back(ele);
		}
	}
	std::cout<<"Enter the elements in the vector2 container"<<std::endl;
	while(std::cin>>ele)
	{
		if(ele == -1)
		{
			break;
		}
		else
		{
			ivec2.push_back(ele);
		}
	}
	//status = (ivec != ilist) ? false : true; we cannot compare vector<int> with list<int>
	status = (ivec != ivec2) ? false : true;
	if(status)
	{
		std::cout<<"both containers have same elements"<<std::endl;
	}
	else
	{
		std::cout<<"both container does not have same elements"<<std::endl;
	}
	return(0);

}
