#include<iostream>
inline const int &SmallerNumber(int&,int&);
int main(void)
{
	int num1,num2;

	std::cout<<"Enter num1: "<<std::endl;
	std::cin>>num1;
	std::cout<<"Enter num2: "<<std::endl;
	std::cin>>num2;
	std::cout<<"Smallest number is: "<<SmallerNumber(num1,num2)<<std::endl;
	return(EXIT_SUCCESS);
}

inline const int &SmallerNumber(int &v1, int &v2)
{
	return v1 < v2 ? v1 : v2;
}
/*
 * compiler removes function call if function is inline. Thus the above call will be expanded during compilation in to something like, std::cout<<(num1 < num2 ? num1 : num2)<<std::endl;
 * inline function is only request to a compiler. Thus, compiler may choose to ignore this request.
 * inline function is used to optimize the code, remove function call and reducing function call overheads.
 * Larger functions are by default ignored by compiler if they are specified as inline. */
