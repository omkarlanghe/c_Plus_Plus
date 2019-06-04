/*
 * ReWrite the program that finds a value to return an iterator that refers to the element.Be sure your function works correctly if the element does not exists.*/

#include<iostream>
#include<vector>
std::vector<int>::iterator isFound(std::vector<int>,std::vector<int>::iterator,std::vector<int>::iterator,int);
int main()
{
	int ele, size;
	int *array = NULL;
	std::vector<int>::iterator iter;
	//std::vector<int> ivec();

	std::cout<<"Enter the size of an array:"<<std::endl;
	std::cin>>size;
	array = new int[size];
	std::cout<<"Enter the elements in an array:"<<std::endl;
	for(int i = 0 ; i < size ; i++)
	{
		std::cin>>array[i];
	}

	std::cout<<"Enter the element to search in an array:"<<std::endl;
	std::cin>>ele;
	
	std::vector<int> ivec(array, array+11);
	std::vector<int>::iterator iter1 = ivec.begin();
	std::vector<int>::iterator iter2 = ivec.end();

	iter = isFound(ivec,iter1,iter2,ele);
	
	if(*iter != ele)
	{
		std::cout<<"Element not found..!"<<std::endl;
	}
	else
	{
		std::cout<<"Element found is-> "<<*iter<<std::endl;
	}
	delete [] array;
	return(0);
}

std::vector<int>::iterator isFound(std::vector<int> ivec, std::vector<int>::iterator iter1, std::vector<int>::iterator iter2, int ele)
{
	for(auto i = ivec.begin() ; i != ivec.end() ; ++i)
	{
		if(*i == ele)
		{
			//std::cout<<*i;
			return i;
			break;
		}
		else
		{
			continue;
		}
	}
}

