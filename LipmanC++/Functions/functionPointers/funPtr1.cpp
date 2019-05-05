#include<iostream>
#include<stdbool.h>
#include<string.h>
#include<cstring>

using namespace std;

typedef int (*fp)(const int, const int);
typedef bool (*boolFcn)();
typedef int (*pfb2)();

int foo(const int a, const int b)
{
	//std::cout<<"Hello"<<std::endl;
	return(a+b);
}

bool foobar()
{
	return true;
}

int foobar2()
{
	return 100;
}
int main(void)
{
	fp pf1 = &foo;
	boolFcn pf2 = foobar;
	pfb2 _pf = foobar2;

	//std::cout<<pf1<<std::endl;
	//std::cout<<pf2<<std::endl;
	
	//calling a function through a pointer
	std::cout<<pf1(10,20)<<std::endl; //implicit dereference
	std::cout<<pf2()<<std::endl; //implicit dereference
	std::cout<<(*_pf)()<<std::endl; //explicit dereference
	return(0);
}	
