#include<iostream>
#include<list>

int main(void)
{
	int ia[7] = {0,1,1,2,3,5,8};
	std::list<int> ilist(ia, ia+8);
	std::list<int>::iterator iter1 = ilist.begin();
	std::list<int>::iterator iter2 = ilist.end();

	while(iter1 < iter2)
	{
		std::cout<<"iter-> "<<*iter1<<std::endl;
		*iter1++;
	}
	return(0);
}
/*
 * The above code contains list iterators.
 * This code will not execute as list iterators does not support relational operators
 */
