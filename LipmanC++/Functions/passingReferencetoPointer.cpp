//Swap program by passing a reference to a pointer
#include<iostream>

void ptrswap(int *&, int *&);

using namespace std;
int main(void)
{
	int i = 10, j = 20;
	int *pi = &i;
	int *pj = &j;
	cout<<"Before swapping:\n"<<*pi<<" "<<*pj<<endl;
	ptrswap(pi,pj);
	cout<<"After swapping:\n"<<*pi<<" "<<*pj<<endl;
	return(0);
}

void ptrswap(int *&v1, int *&v2)
{
	int *temp = v2;
	v2 = v1;
	v1 = temp;
}

