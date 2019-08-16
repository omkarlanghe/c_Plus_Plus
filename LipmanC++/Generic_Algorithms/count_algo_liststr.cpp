#include<iostream>
#include<list>
#include<algorithm>

int main()
{
	std::list<std::string> slist;
	std::string input, search_str;

	while(std::cin>>input)
	{
		if(input == "q" || input == "Q")
			break;
		else
			slist.push_back(input);
	}

	std::cout<<"Enter the value to search : "<<std::endl;
	std::cin>>search_str;

	int result = count(slist.begin(), slist.end(), search_str);

	std::cout<<"search string "<<search_str<<" is present "<<result<<" times."<<std::endl;
	return(EXIT_SUCCESS);
}
