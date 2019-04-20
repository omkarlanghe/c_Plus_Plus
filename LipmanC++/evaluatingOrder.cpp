#include<iostream>
using namespace std;

int fun1();
int fun2();

int fun1()
{
	return(10);
}

int fun2()
{
	return(10);
}

int main()
{
	cout<<"result of multipliying two functions is: "<<fun1()*fun2()<<endl;
	return(0);
}
