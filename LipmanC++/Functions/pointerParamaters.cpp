#include<iostream>
using namespace std;

void reset(int *);

int main()
{
	int i = 42;
	int *p = &i;
	cout<<"i: "<<*p<<endl; //prints i = 42
	reset(p);
	cout<<"i: "<<*p<<endl;
	return(0);
}

void reset(int *ip)
{
	*ip = 0;
	cout<<"ip: "<<*ip<<endl;
	//ip = 0;
	//cout<<"ip: "<<ip<<endl;
}
