#include<iostream>
#include<vector>
#include<list>

int main(void)
{
	std::vector<std::string> svec;
	std::list<std::string> slist;
	std::string movie("Godfather");

	//equivalent to calling slist.push_front(spouse);
	slist.insert(slist.begin(), movie);
	//no push_front on vector but we can insert before begin()
	svec.insert(svec.begin(), movie);

	//printing slist
	for(auto i = slist.begin() ; i != slist.end() ; ++i)
	{
		std::cout<<"List container contains: "<<*i<<std::endl;
	}
	//printing vector
	for(auto i = svec.begin() ; i != svec.end() ; ++i)
	{
		std::cout<<"Vector container contains: "<<*i<<std::endl;
	}
	return(EXIT_SUCCESS);
}
