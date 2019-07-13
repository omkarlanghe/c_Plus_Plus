// use iterators to change the characters in a string to uppercase
#include<iostream>
#include<cctype>
void UpperCase(std::string);
void LowerCase(std::string);

int main()
{
	std::string inputStr;
	std::cout<<"Enter the string: "<<std::endl;
	std::cin>>inputStr;

	UpperCase(inputStr);
	LowerCase(inputStr);
	return(0);
}

void UpperCase(std::string inputStr)
{
	std::string::iterator iter = inputStr.begin();
	while(iter != inputStr.end())
	{
		std::cout<<"upper case: "<<(char)std::toupper(*iter++)<<std::endl;
	}
}

void LowerCase(std::string inputStr)
{
	std::string::iterator iter = inputStr.begin();
	while(iter != inputStr.end())
	{
		std::cout<<"lower case: "<<(char)std::tolower(*iter++)<<std::endl;
	}
}

