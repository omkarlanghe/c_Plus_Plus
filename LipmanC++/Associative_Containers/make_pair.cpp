#include<iostream>
#include<utility>
#include<list>

void PrintPairsFromList(std::list<std::pair<std::string, std::string>>);

int main()
{
	std::pair<std::string, std::string> next_name;
	std::string first, last;
	std::list<std::pair<std::string, std::string>> pList;

	while(std::cin>>first>>last)
	{
		if(first == "q" || first == "Q" || last == "q" || last == "Q")
		{
			break;
		}
		next_name = make_pair(first, last);
		pList.push_back(next_name);
	}

	PrintPairsFromList(pList);
	return(0);
}

void PrintPairsFromList(std::list<std::pair<std::string, std::string>> pList)
{
	for(auto iter = pList.begin() ; iter != pList.end() ; ++iter)
	{
		std::cout<<iter->first<<" : "<<iter->second<<std::endl;
	}
}
