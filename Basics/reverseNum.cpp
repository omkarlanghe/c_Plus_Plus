#include<iostream>
//123
void ReverseNumber()
{
	int num,rem;
	
	std::cout<<"Enter the number to reverse: \n"<<std::endl;
	std::cin>>num;
	
	while(num!=0)
	{
		rem = num%10;
		std::cout<<"Reverse is : "<<rem<<std::endl;
		num = num/10;
	}	
}

int main()
{
	ReverseNumber();
	return 0;
}
