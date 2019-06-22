#include<iostream>
#include<list>

int main()
{
	std::list<int> ilist(10, 42); //10 ints each has value 42
	std::cout<<"ilist contains: "<<ilist.size()<<" elements"<<std::endl;

	ilist.resize(15); //adds 5 elements of value 0 to back of ilist
	std::cout<<"ilist contains: "<<ilist.size()<<" elements"<<std::endl;

	ilist.resize(25, -1); //adds 10 elements of value -1 to back of ilist
	std::cout<<"ilist contains: "<<ilist.size()<<" elements"<<std::endl;

	ilist.resize(5); //erases 20 elements from the back of ilist
	std::cout<<"ilist contains: "<<ilist.size()<<" elements"<<std::endl;

	// max_size() returns maximum number of elements container can obtain. Return type is c::size_type
	std::cout<<"max size of container is: "<<ilist.max_size()<<" elements"<<std::endl;
	
	return(0);
}
