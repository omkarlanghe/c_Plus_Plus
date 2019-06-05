#include<iostream>
#include<list>

int main()
{
	std::list<int> ilist;
	for(size_t i = 0 ; i != 5 ; ++i)
	{
		ilist.push_front(i);
	}
	for(auto iter = ilist.begin() ; iter != ilist.end() ; iter++)
	{
		std::cout<<"ilist iterator-> "<<*iter<<std::endl;
	}
	return(0);
}
/*
 * each element is inserted at the new beginning of the list, they wind up in reverse order*/
