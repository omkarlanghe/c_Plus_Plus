#include<iostream>

int  PalindromNumber(int num)
{
	int rem,result = 0;
	while(num!=0)
	{
		rem = num%10;
		result = result*10+rem;
		num = num/10;
	}
	return result;
}

void Display()
{
	int num;
	
	std::cout<<"Enter the number to check:\n"<<std::endl;
	std::cin>>num;
	
	int temp = num;
	int retVal = PalindromNumber(num);
	
	if(temp == retVal)
	{
		std::cout<<"The number is palindrom.\n"<<std::endl;
	}
	else
	{
		std::cout<<"The number is not palindrom.\n"<<std::endl;
	}
}

int main()
{
	Display();
	return 0;
}


