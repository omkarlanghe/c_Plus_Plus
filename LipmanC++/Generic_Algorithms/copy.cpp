#include<iostream>
#include<vector>
#include<algorithm>
#include<list>

int main()
{
	std::vector<int> ivec;
	std::list<int> ilist;

	fill_n(back_inserter(ilist), 10, 26); //inserts 10 elements in ilist each with value 26
	copy(ilist.begin(), ilist.end(), back_inserter(ivec)); //copy ilist elements into ivec
	
	for(auto iter = ivec.begin() ; iter != ivec.end() ; ++iter)
	{
		std::cout<<*iter<<std::endl;
	}
	return 0;
}
