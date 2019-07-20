//use iterators to find and to erase each capital letters from a string
#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>
int main()
{
	std::string input;
	std::string output;
	std::cout<<"Enter the string:"<<std::endl;
	std::cin>>input;
	std::string::iterator element;
	/*for(auto iter = input.begin() ; iter != input.end() ; iter++)
	{
		if(isupper(*iter))
		{
			
		}
		else
		{
			std::cout<<"not found"<<std::endl;
		}
	}*/
	std::cout<<"output"<<input<<std::endl;
	return(0);
}

