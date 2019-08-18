#include<iostream>
#include<vector>
#include<algorithm>
#include<stdbool.h>

bool GT4(const std::string &);

int main()
{
	std::vector<std::string> words;
	std::string input;

	while(std::cin>>input)
	{
		if(input == "q" || input == "Q")
			break;
		else
			words.push_back(input);
	}

	sort(words.begin(), words.end());

	std::vector<std::string>::iterator end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

	std::vector<std::string>::size_type wc = count_if(words.begin(), words.end(), GT4);

	std::cout<<"words greater that or equal to 4 are : "<<wc<<std::endl;

	for(auto iter = words.begin() ; iter != words.end() ; ++iter)
	{
		std::cout<<*iter<<" ";
	}
	std::cout<<"\n"<<std::endl;
	return 0;
}

bool GT4(const std::string &s)
{
	return(s.size() >= 4);
}
