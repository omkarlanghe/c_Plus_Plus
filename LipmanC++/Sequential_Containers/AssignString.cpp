#include<iostream>
int main() 
{
	char *cp = "India is my country";
	std::string s;
	s.assign(cp, 8); // s == "India is"
	s.insert(s.size(), cp + 8);

	std::cout<<s<<std::endl;
	return(0);
}
