/*
 * Using iterators, write a program to read a sequence of strings from the standard input into a vector. Print the elements in the vector.*/
#include<iostream>
#include<vector>
#include<string.h>

int main()
{
	std::string input;
	std::vector<std::string> svec;

	std::cout<<"Enter the string:"<<std::endl;
	while(std::cin>>input)
	{
		svec.push_back(input);
		break;
	}
	std::cout<<"Displaying vector now.."<<std::endl;
	for(auto iter = input.begin() ; iter != input.end() ; iter++)
	{
		std::cout<<*iter<<std::endl;
	}	
	return(0);
}
