#include<iostream>
#include<vector>
#include<typeinfo>

double LargestElementInVector(std::vector<double> , int);

int main(void)
{
	int size, sum = 0;
	std::vector<int>::size_type i;
	std::vector<int>::size_type j;
	std::cout<<"Enter the size of the vector:"<<std::endl;
	std::cin>>size;
	//initialize vector by giving size
	std::vector<double> ivec(size);
	std::cout<<"Enter elements in vector of type int:"<<std::endl;
	for(i = 0 ; i != ivec.size() ; i++)
	{
		std::cin>>ivec[i];
	}
	
	for(j = 0 ; j != ivec.size() ; j++)
	{
		sum += ivec[j];
	}
	std::cout<<"Sum of the elements in the vector is:"<<sum<<std::endl;
	double result = LargestElementInVector(ivec,size);
	std::cout<<"Largest element in the vector is:"<<result<<std::endl;
	return(0);
}

double LargestElementInVector(std::vector<double> ivec, int size)
{
	double max = ivec[0];
	for(int i = 0 ; i != size; i++)
	{
		if(max < ivec[i])
		{
			max = ivec[i];
			//std::cout<<typeid(max).name()<<std::endl;
		}
	}
	return(max);
}
