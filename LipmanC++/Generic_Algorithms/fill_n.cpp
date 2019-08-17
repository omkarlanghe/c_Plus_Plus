#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> ivec(10);
	fill_n(ivec.begin(), ivec.size(), 26);
	for(auto iter = ivec.begin() ; iter != ivec.end() ; ++iter)
	{
		std::cout<<*iter<<std::endl;
	}
	return(0);
}
