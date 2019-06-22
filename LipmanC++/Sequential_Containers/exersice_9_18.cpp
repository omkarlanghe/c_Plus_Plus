/*
 * write a program to copy elements from a list of ints into two deques. The list elements that are even should go into one deque and those that are odd should go in another deque*/

#include<iostream>
#include<list>
#include<deque>

void printEvenOddDeque(std::list<int> ilist, std::deque<int> evenDeque, std::deque<int> oddDeque);
int main()
{
	int ele;
	std::list<int> ilist;
	std::deque<int> evenDeque;
	std::deque<int> oddDeque;

	std::cout<<"Enter the elements:"<<std::endl;
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

	/*std::cout<<"Displaying elements in the list:"<<std::endl;
	for(auto iter = ilist.begin() ; iter != ilist.end() ; ++iter)
	{
		std::cout<<*iter<<std::endl;
	}*/

	printEvenOddDeque(ilist, evenDeque, oddDeque);
	return(0);
}

void printEvenOddDeque(std::list<int> ilist, std::deque<int> evenDeque, std::deque<int> oddDeque)
{
	for(auto iter = ilist.begin() ; iter != ilist.end() ; ++iter)
	{
		if((*iter&1) != 0)
		{
			oddDeque.push_back(*iter);
		} 
		else 
		{
			evenDeque.push_back(*iter);
		}
	}

	std::cout<<"Diplaying deque with odd elements"<<std::endl;
	for(auto iter = oddDeque.begin() ; iter != oddDeque.end() ; ++iter)
	{
		std::cout<<*iter<<std::endl;
	}
	std::cout<<"Displaying deque with even elements"<<std::endl;
	for(auto iter = evenDeque.begin() ; iter != evenDeque.end(); ++iter)
	{
		std::cout<<*iter<<std::endl;
	}
}
