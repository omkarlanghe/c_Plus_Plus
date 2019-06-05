#include<iostream>
#include<vector>

int main()
{
	std::string text_word;
	std::vector<std::string> svec;

	while(std::cin>>text_word)
	{
		svec.push_back(text_word);
		break;
		/*
		 * call to push_back creates a new element at the end of container, increasing the size of the  container by one
		 * */
	}
	for(auto i = svec.begin() ; i != svec.end() ; ++i)
	{
		std::cout<<"iterator-> "<<*i<<std::endl;
	}
	return(0);
}
