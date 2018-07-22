#include<iostream>

void DigitOccurances()
{
	int number,n,rem,count=0;
	
	std::cout<<"Enter the number on console\n"<<std::endl;
	std::cin>>number;
	
	std::cout<<"Enter the digit to check its occurances\n"<<std::endl;
	std::cin>>n;
	
	while(number!=0)
	{
		rem = number%10;
		if(n == rem)
		{
			count++;	
		}
		number = number/10;
	}
	std::cout<<"The number "<<n<<" is present "<<count<<" times\n"<<std::endl;
}

int main()
{
	DigitOccurances();
	return 0;
}
