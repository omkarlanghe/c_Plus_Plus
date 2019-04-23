/*
 * write a function that takes an int and a pointer to an int and returns the larger of the int value of the value to which the pointer pointes. What type should you use for the pointer.
*/

#include<iostream>
using namespace std;

int a, b, *ptr;
int largerVal(int,int*);

int main()
{
	cout<<"Enter the value for a"<<endl;
	cin>>a;
	cout<<"Enter the value for b"<<endl;
	cin>>b;

	int *ptr = &b;
	//cout<<*ptr<<endl;
	int result = largerVal(a, ptr);
	return(0);
	cout<<"larger value is: "<<result<<endl;
}
int largerVal(int a, int *ptr)
{
	//cout<<a<<*ptr<<endl;
	int temp = *ptr;
	if(a > temp)
		cout<<"greater is: "<<a<<endl;
		//return a;
	else
		cout<<"greater is: "<<temp<<endl;
		//return temp;
}
