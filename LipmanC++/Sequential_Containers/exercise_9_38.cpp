/*
 * WAP, given string "ab2c3d7R4E6".
 * find each numeric character and then each alphabet character. write two versions of the program
 * The first should be find_first_of, and second find_first_not_of
 */

#include<iostream>

void FindNumerics(std::string, std::string);
void FindAlphabets(std::string, std::string);
void FindNumericsV2(std::string, std::string);
void FindAlphabetsV2(std::string, std::string);

int main()
{
	std::string input("ab2c3d7R4E6");
	std::string search_input("0123456789");
	std::string search_input2("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	FindNumerics(input, search_input);
	std::cout<<"*************************************"<<std::endl;
	FindAlphabets(input, search_input2);
	std::cout<<"*************************************"<<std::endl;
	FindAlphabetsV2(input, search_input);
	std::cout<<"*************************************"<<std::endl;
	FindNumericsV2(input, search_input2);
	return(0);
}

void FindNumerics(std::string input, std::string search_input)
{
	std::string::size_type pos = 0;
	
	while((pos = input.find_first_of(search_input, pos)) != std::string::npos) {
		std::cout<<"found number at index: "<<pos<<" element is "<<input[pos]<<std::endl;
		++pos;
	}

}

void FindAlphabets(std::string input, std::string search_input)
{
	std::string::size_type pos = 0;

	while((pos = input.find_first_of(search_input, pos)) != std::string::npos) {
		std::cout<<"found alphabet at index: "<<pos<<" element is "<<input[pos]<<std::endl;
		++pos;
	}
}

void FindAlphabetsV2(std::string input, std:: string search_input)
{	
	std::string::size_type pos = 0;

	while((pos = input.find_first_not_of(search_input, pos)) != std::string::npos) {
		std::cout<<"found alphabet at index: "<<pos<<" element is "<<input[pos]<<std::endl;
		++pos;
	}
}

void FindNumericsV2(std::string input, std::string search_input)
{
	std::string::size_type pos = 0;

	while((pos = input.find_first_not_of(search_input, pos)) != std::string::npos) {
		std::cout<<"found number at index: "<<pos<<" element is "<<input[pos]<<std::endl;
		++pos;
	}
}

