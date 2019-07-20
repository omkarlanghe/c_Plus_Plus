#include<iostream>

int main()
{
	std::string s("hello world");
	std::string s2 = s.substr(6);
	std::cout<<s2<<std::endl;
	return(0);
}
