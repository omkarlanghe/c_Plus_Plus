#include<iostream>
#include<map>

int main()
{
	std::map<std::string, int> word_count;
	int occurs = word_count["foobar"];
	std::cout<<occurs<<std::endl;
	return 0;
}
