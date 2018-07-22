#include<iostream>

int main()
{
	//Difference in arithmetic operators in c & c++ for preincrement/predecrement
	
	//In C the below code will not work and compiler throws an error "l-value required"
	//But in C++, preincrement /decrement in C++(i.e ++i) returns i , i.e returns refererence of i.
	
	int i=10;
	++i = 100;
	
	std::cout<<"i = "<<i;
	
	//post increment/decrement is same in both c and c++; (eg : i++ = 100) will not work in both.s
}

