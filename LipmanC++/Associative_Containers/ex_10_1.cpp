/*
 * WAP to read a sequence of strings and ints, storing each into a pair. Store the pairs in a vector
 * */

#include<iostream>
#include<vector>
#include<utility>

int main()
{
	std::pair<std::string, std::string> name1("microsoft", "redmond");
	std::pair<std::string, std::string> name2("arm", "cambridge");
	std::pair<std::string, std::string> name3("intel", "silicon valley");
	
	std::vector<std::pair<std::string, std::string>> pVecObj;

	pVecObj.push_back(name1);
	pVecObj.push_back(name2);
	pVecObj.push_back(name3);
	
	//using iterators
	for(auto iter = pVecObj.begin() ; iter != pVecObj.end() ; ++iter) {
		std::cout<<iter->first<<" : "<<iter->second<<std::endl;
	}
	
	//using subscript operator
	for(int i = 0 ; i < pVecObj.size() ; i++) {
		std::cout<<pVecObj[i].first<<" : "<<pVecObj[i].second<<std::endl;	
	}
	return(0);
}
