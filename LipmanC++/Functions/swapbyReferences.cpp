#include<iostream>
using namespace std;

void swapbyreferences(int &, int &);
int main(void)
{
	int a = 10, b = 20;
	cout<<"Before swapping: "<<a<<" "<<b<<endl;
	swapbyreferences(a,b);
	cout<<"After swapping: "<<a<<" "<<b<<endl;
	return(0);
}
void swapbyreferences(int &v1, int &v2)
{
	int temp = v1;
	v1 = v2;
	v2 = temp;
}
