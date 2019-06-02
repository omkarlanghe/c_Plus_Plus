//Allocation and Initializing a specified number of elements
#include<iostream>
#include<list>
#include<string>

int main(void)
{
	const std::list<int>::size_type list_size = 64;
	std::list<std::string> slist(list_size, "primer");
	std::list<int> ilist(list_size); //64 elements each initialized to 0.
	//std::vector<std::string> svec(std::get_word_count("C++ Primer"));

	//std::cout<<"word count is: "<<svec<<std::endl;

	for(auto iter = slist.begin() ; iter != slist.end() ; ++iter) //used iterators instead of subscript operator
	{
		std::cout<<' '<<*iter<<std::endl;
	}
	return(0);
}
//This code initializes slist to have 64 elements,each with value "primer".
