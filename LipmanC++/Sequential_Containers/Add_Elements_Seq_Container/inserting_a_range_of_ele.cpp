#include<iostream>
#include<list>

int main()
{
	std::string sarray[4] = {"godfather", "matrix", "lord of the rings", "titanic"};
	std::list<std::string> slist;
	//inserts all elements at the end of the list
	slist.insert(slist.end(), sarray, sarray+4);
	
	for(auto iter = slist.begin() ; iter != slist.end() ; ++iter)
	{
		std::cout<<"list container contains: "<<*iter<<std::endl;
	}

	std::list<std::string>::iterator slist_iter = slist.begin();
	// insert last two elements of sarray before slist_iter
	slist.insert(slist_iter, sarray+2, sarray+4);
	std::cout<<"###########################"<<std::endl;
	for(auto iter = slist.begin() ; iter != slist.end() ; ++iter)
	{
		std::cout<<"list container contains: "<<*iter<<std::endl;
	}
	return 0;
}
