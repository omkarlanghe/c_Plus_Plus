#include<iostream>

int Addition(int firstNum, int secNum);
int Subtraction(int firstNum, int secNum);
int Multiply(int firstNum, int secNum);
float Division(int firstNum, int secNum);

int main()
{
	int firstNum,secNum;
	
	std::cout<<"Enter the first number:\n"<<std::endl;
	std::cin>>firstNum;
	
	std::cout<<"Enter the second number:\n"<<std::endl;
	std::cin>>secNum;
	
	int result1 = Addition(firstNum,secNum);
	std::cout<<"Sum of two numbers is:\n"<<result1<<std::endl;
	
	int result2 = Subtraction(firstNum,secNum);
	std::cout<<"Subtraction of two numbers is:\n"<<result2<<std::endl;
	
	int result3 = Multiply(firstNum,secNum);
	std::cout<<"Multiplication of two numbers is:\n"<<result3<<std::endl;
	
	float result4 = Division(firstNum,secNum);
	std::cout<<"Division of two numbers is:\n"<<result4<<std::endl;
	
	return 0;
}

int Addition(int firstNum, int secNum)
{
	int retVal;
	retVal = firstNum+secNum;
	
	return retVal;
}

int Subtraction(int firstNum, int secNum)
{
	int retVal;
	retVal = firstNum-secNum;
	
	return retVal;
}

int Multiply(int firstNum, int secNum)
{
	int retVal;
	retVal = firstNum*secNum;
	
	return retVal;
}

float Division(int firstNum, int secNum)
{
	float retVal;
	retVal = firstNum/secNum;
	
	return retVal;
}
