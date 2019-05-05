#include<iostream>
#include<stdbool.h>

typedef bool (*pf_oddeven)(const int);
void foo(bool(const int));

bool odd_even(const int val)
{
	if((val&1)==0)
		return(true);
	else
		return(false);
}

void foo(pf_oddeven fptr, int num)
{
	std::cout<<"foo started and called @ addr: "<<&fptr<<std::endl;
	int result = (*fptr)(num);
	if(result == 1)
		std::cout<<"The given number is even"<<std::endl;
	else
		std::cout<<"The number is odd"<<std::endl;
}

int main(void)
{
	int num;
	std::cout<<"Enter the number to check"<<std::endl;
	std::cin>>num;

	pf_oddeven pf1 = odd_even;
	std::cout<<"called before function called @ addr: "<<&pf1<<std::endl;
	foo(pf1,num);

	int result = (*pf1)(num);
	if(result == 1)
		std::cout<<"The given number is even"<<std::endl;
	else
		std::cout<<"The given number is odd"<<std::endl;

	return(EXIT_SUCCESS);
}

