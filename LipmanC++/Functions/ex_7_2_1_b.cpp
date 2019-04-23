/*
 * write a function to swap the values pointer to by two pointers to int.Test the funtion by calling it and printing the swapped value. 
 */
#include<iostream>

using namespace std;
void swapbyreference(int *, int *);

int main(void)
{
	int a = 0, b = 0;
	
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	cout<<"Before swapping two numbers:"<<a<<" "<<b<<endl;
	swapbyreference(&a,&b); //passing address to two variables
	return(0);
}
void swapbyreference(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout<<"After swapping two numbers:"<<*a<<" "<<*b<<endl;
}
