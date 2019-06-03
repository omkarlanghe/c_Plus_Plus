//write a loop to write the elements of a list in reverse order
#include<iostream>
#include<list>
#include<stdlib.h>
int main()
{
	int ia[10] = {0,1,2,3,4,5,6,7,8,9};
	int *array = new int[10];
	int index = 0;
	std::list<int> ilist(ia, ia+9);
	std::list<int> ilist2();
	std::list<int>::iterator iter1 = ilist.begin();
	std::list<int>::iterator iter2 = ilist.end();

	for(auto i = iter2 ; i != iter1 ; --i)
	{
		std::cout<<*i<<std::endl;
		array[index] = *i;
		index++;

	}
	for(int i = 0 ; i < 10 ; i++)
	{
		std::cout<<"ele-> "<<array[i]<<std::endl;
	}

	delete [] array;
	return(0);
}

