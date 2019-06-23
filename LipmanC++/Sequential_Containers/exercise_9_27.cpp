/*
 * WAP to process a list of strings. look for a particular value, and if found, remove it. Repeat the program using deque.
 */
#include<iostream>
#include<list>
#include<deque>
#include<algorithm>

void removeIfFoundList(std::list<std::string>, std::string);
void removeIfFoundInDeque(std::deque<std::string>, std::string);

int main()
{
	std::list<std::string> slist;
	std::deque<std::string> sdeque;
	std::string input;
	std::string value;

	std::cout<<"Enter the elements in the list"<<std::endl;
	while(std::cin>>input)
	{
		if(input == "exit")
		{
			break;
		}
		else
		{
			slist.push_back(input);
			sdeque.push_back(input);
		}
	}
	std::cout<<"Enter the value to find and then remove the element in the given list"<<std::endl;
	std::cin>>value;

	removeIfFoundList(slist, value);
	removeIfFoundInDeque(sdeque, value);
	return(0);
}
void removeIfFoundInDeque(std::deque<std::string> sdeque, std::string value)
{
	if(sdeque.empty())
	{
		std::cout<<"deque container is empty"<<std::endl;
	}
	else
	{
		std::deque<std::string>::iterator element;
		element = find(sdeque.begin(), sdeque.end(), value);

		std::cout<<"value: "<<*element<<std::endl;
		sdeque.erase(element);
		std::cout<<"###########deque container after removing element#########"<<std::endl;
		for(auto iter = sdeque.begin() ; iter != sdeque.end() ; ++iter)
		{
			std::cout<<"ele->"<<*iter<<std::endl;
		}
	}
	sdeque.clear();
}
void removeIfFoundList(std::list<std::string> slist, std::string value)
{
	if(slist.empty())
	{
		std::cout<<"list container is empty"<<std::endl;
	}
	else
	{
		std::list<std::string>::iterator element;
		element = find(slist.begin(), slist.end(), value);
	
		std::cout<<"value: "<<*element<<std::endl;
		slist.erase(element);
		std::cout<<"###########slist container after removing element##########"<<std::endl;
		for(auto iter = slist.begin() ; iter != slist.end() ; ++iter)
		{
			std::cout<<"ele->"<<*iter<<std::endl;
		}
		/*
		if(slist.empty())
		{
			std::cout<<"list container does not contain elements"<<std::endl;
		}
		else
		{
			for(auto iter = slist.begin() ; iter != slist.end() ; ++iter)
			{
				if(*iter == value)
				{
					//element = iter;
					//slist.erase(element); **here iterator gets invalidated which leads to segmentation fault**
				}
				else
				{
					std::cout<<"element not found"<<std::endl;
				}
			}
		}
		*/
	}
	slist.clear();
}
