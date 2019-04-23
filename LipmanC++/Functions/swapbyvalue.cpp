#include<iostream>
using namespace std;
void swapbyvalue(int,int);
int main()
{
	int a = 10, b = 20;
	cout<<"Before swapping: "<<a<<" " <<b<<endl;
	swapbyvalue(a,b);
	cout<<"After function call: "<<a<<" "<<b<<endl;
	return(0);
}

void swapbyvalue(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout<<"After swapping: "<<a<<" "<<b<<endl;
}
