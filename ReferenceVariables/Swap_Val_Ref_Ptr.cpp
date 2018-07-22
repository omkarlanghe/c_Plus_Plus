#include<iostream>

int SwapByValue(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int SwapByPointers(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int SwapByReference(int &a, int &b)
{
	int temp  = a; 
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b = 20;
	
	std::cout<<"Before Swapping"<<std::endl;
	std::cout<<"a = "<<a<<" : "<<"b = "<<b<<std::endl;
	
	std::cout<<"After Swapping"<<std::endl;
	SwapByValue(a,b);
	std::cout<<"a = "<<a<<" : "<<"b = "<<b<<std::endl;
	SwapByPointers(&a,&b);
	std::cout<<"a = "<<a<<" : "<<"b = "<<b<<std::endl;
	SwapByReference(a,b);
	std::cout<<"a = "<<a<<" : "<<"b = "<<b<<std::endl;
	
	return 0;
}
