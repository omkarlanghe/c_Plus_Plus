/*
 * Write a function that takes a pair of iterators and an int value. Look for that value and return a bool indicating whether it was found.*/

#include<iostream>
#include<vector>
bool isFound(std::vector<int>,std::vector<int>::iterator,std::vector<int>::iterator,int);
int main()
{
	int ele, size;
	int *array = NULL;
	bool status = false;
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

	status = isFound(ivec,iter1,iter2,ele);
	
	if(status)
	{
		std::cout<<"Has element"<<std::endl;
	}
	else
	{
		std::cout<<"No element found"<<std::endl;
	}
	delete [] array;
	return(0);
}

bool isFound(std::vector<int> ivec, std::vector<int>::iterator iter1, std::vector<int>::iterator iter2, int ele)
{
	for(auto i = ivec.begin() ; i != ivec.end() ; ++i)
	{
		if(*i == ele)
		{
			std::cout<<*i;
			return true;
		}
		else
		{
			continue;
		}
	}
}

