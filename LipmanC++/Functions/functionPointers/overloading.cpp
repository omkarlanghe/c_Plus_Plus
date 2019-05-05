#include<iostream>
typedef int (*pf)(int,int);
typedef float (*pf2)(float, float, float);
int foo(int a, int b)
{
	return a+b;
}

float foo(float a, float b, float c)
{
	return a+b+c;
}

int main()
{
	pf _p1 = foo;
	pf2 _p2 = foo;
	std::cout<<(*_p1)(10.4,20)<<std::endl;
	std::cout<<(*_p2)(1.2,10,30)<<std::endl;
}
