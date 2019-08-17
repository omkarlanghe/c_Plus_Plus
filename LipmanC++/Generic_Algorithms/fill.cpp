#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> ivec;
	
	// std::cout<<"size -> "<<ivec.size()<<std::endl;
	for(int i = 0 ; i != 10 ; i++)
	{
		ivec.push_back(i);
	}

	fill(ivec.begin(), ivec.begin() + ivec.size()/2, 26);
	for(auto i = ivec.begin() ; i != ivec.end() ; ++i)
	{
		std::cout<<"element -> "<<*i<<std::endl;
	}
	return 0;
}
