#include<iostream>
#include<list>

int main(void)
{
	std::string word;
	std::list<std::string> list;
	std::list<std::string>::iterator iter = list.begin();
	while(std::cin>>word)
	{
		if(word == "exit")
		{
			break;
		}
		else
		{
			iter = list.insert(iter, word); //same as calling push_front
		}
	}
	for(auto i = list.begin() ; i != list.end() ; ++i)
	{
		std::cout<<"list container contains: "<<*i<<std::endl;
	}
	return(0);
}
