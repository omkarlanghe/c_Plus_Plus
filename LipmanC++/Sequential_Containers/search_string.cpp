#include<iostream>

int main()
{
	std::string numerics("0123456789");
	std::string name("r2d6");

	std::string::size_type pos = 0;
	
	//each trip reset pos to the next instance in name
	while((pos = name.find_first_of(numerics, pos)) != std::string::npos) {
		std::cout<<"found number at index "<<pos<<" element is "<<name[pos]<<std::endl;
		++pos; //move to the next character
	}

	return(0);
}
