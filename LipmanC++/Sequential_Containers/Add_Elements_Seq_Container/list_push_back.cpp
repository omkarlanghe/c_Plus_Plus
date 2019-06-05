#include<iostream>
#include<list>

int main()
{
	std::list<int> ilist;
	for(size_t ix = 0 ; ix != 4 ; ++ix)
	{
		ilist.push_back(ix);
	}
	for(auto i = ilist.begin() ; i != ilist.end() ; i++)
	{
		std::cout<<"ilist iterator-> "<<*i<<std::endl;
	}
	return(0);
}
