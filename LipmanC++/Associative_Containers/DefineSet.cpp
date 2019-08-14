#include<iostream>
#include<vector>
#include<set>

int main()
{
	std::vector<int> ivec;
	for(std::vector<int>::size_type i = 0 ; i != 10 ; ++i)
	{
		ivec.push_back(i);
		ivec.push_back(i);
	}

	std::set<int> iset(ivec.begin(), ivec.end());

	std::cout<<"ivec :"<<ivec.size()<<std::endl;
	std::cout<<"iset :"<<iset.size()<<std::endl;

	std::set<std::string> sSet;
	sSet.insert("Jai");
	sSet.insert("Shree");
	sSet.insert("Ram");

	std::cout<<"sSet :"<<sSet.size()<<std::endl;
}
