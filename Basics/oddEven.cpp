#include<iostream>

int EvenNumber(int num)
{
	int flag = 0;
	
	if((num&1)==0)
	{
		flag = 1;
	}
	return flag;
}

int main()
{
	int num;
	
	std::cout<<"Enter the number to check:\n"<<std::endl;
	std::cin>>num;
	
	int result1 = EvenNumber(num);
	
	if(result1 == 1)
	{	
		std::cout<<"The number is even number\n"<<std::endl;	
	}
	else
	{
		std::cout<<"The number is odd number\n"<<std::endl;
	}
	
	return 0;
}
