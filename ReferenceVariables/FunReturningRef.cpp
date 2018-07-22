#include<iostream>

int &FuntionReturningReference(int &param)
{
	int i = param;
	std::cout<<i<<" : "<<&i<<std::endl;
	
	param = 40;
	std::cout<<param<<" : "<<&param<<std::endl;
	return param;
	
	//warning: reference to local variable ‘i’ returned [-Wreturn-local-addr]
	//return i;
	
}

int main()
{
	int var = 10;
	FuntionReturningReference(var) = 200;
	std::cout<<var<<" : "<<&var<<std::endl;
	return 0;	
}
