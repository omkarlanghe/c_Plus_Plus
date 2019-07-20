#include<iostream>

int main()
{
	std::string s("C++ Primer");
	s.append(" 3rd ed.");
	std::cout<<s<<std::endl;

	//starting at pos 11, erase 3 characters and then insert "4th"
	s.replace(11, 3, "4th");
	std::cout<<s<<std::endl;
	
	//starting at pos 11, remove "4th"
	s.erase(11, 3);
	std::cout<<s<<std::endl;

	return(0);
}
