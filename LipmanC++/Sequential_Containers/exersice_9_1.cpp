#include<iostream>
#include<vector>
#include<list>

int main()
{
	int ia[7] = {0, 1, 1, 2, 3, 5, 8};
	std::string sa[6] = {"Fort Sumter", "Manassas", "Perryville", "Vicksberg", "Meridian", "Chancellorsville"};
	std::vector<std::string> svec(sa, sa+3); //initializes svec from 0 to 2
	std::list<int> ilist(ia+4, ia+6);
	std::vector<int> ivec(ia, ia+8);
	//std::list<std::string> slist(sa+6, sa);

	std::cout<<"##### vector of type string #####"<<std::endl;
	for(auto iter = svec.begin() ; iter != svec.end() ; ++iter)
	{
		std::cout<<"iter(string)-> "<<*iter<<std::endl;
	}
	std::cout<<"##### list of type int #####"<<std::endl;
	for(auto iter = ilist.begin() ; iter != ilist.end() ; ++iter)
	{
		std::cout<<"iter(int)-> "<<*iter<<std::endl;
	}
	std::cout<<"##### vector of type int #####"<<std::endl;
	for(auto iter = ivec.begin() ; iter != ivec.end() ; ++iter)
	{
		std::cout<<"iter(int)-> "<<*iter<<std::endl;
	}

	/*std::cout<<"##### list of type string #####"<<std::endl;
	for(auto iter = slist.begin() ; iter != slist.end() ; ++iter)
	{
		std::cout<<"iter(string)-> "<<*iter<<std::endl;
	}*/
	
	/*terminate called after throwing an instance of 'std::bad_alloc'
  	what():  std::bad_alloc
	Aborted (core dumped)*/
	return(0);
}
