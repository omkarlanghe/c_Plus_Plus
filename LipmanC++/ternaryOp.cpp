#include<iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout<<"Enter the first number"<<endl;
	cin>>num1;
	cout<<"Enter the second number"<<endl;
	cin>>num2;

	int result = num1 > num2 ? 1 : 0;
	if(result == 1)
		cout<<num1<<" is greater"<<endl;
	else
		cout<<num2<<" is greater"<<endl;

	return(0);
}
