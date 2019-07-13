#include<iostream>

int main()
{
	std::string s("Never forget the basics!!");
	std::string::iterator iter = s.begin();
	while(iter != s.end())
	{
		std::cout<<*iter++<<std::endl;
	}
	std::cout<<s + "..."<<std::endl;

	std::string s2(s);
	std::string::iterator itr = s.end();
	while(itr != s.begin())
	{
		std::cout<<*itr--<<std::endl;
	}
	return(0);
}
